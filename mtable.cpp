#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char*argv[])
{
    int x, y;
    if (argc <= 2)  //not enough inputs given
    {
        x = 1; 
        y = 1;
    }
    else
    {
        char operation = 'x';
        if(argc >= 4)
            operation = *argv[3];
        x = stoi(argv[1]);
        y = stoi(argv[2]);

        cout << " " << operation << "|";
        for (int loop = 0; loop < x; loop++)    //top line of table
        {
            cout << setw(5);
            cout << loop+1;
        }
        cout << endl << "---";
        for (int loop = 0; loop < x; loop++)
        {
            cout << "-----";
        }
        cout << endl;
        for (int loop = 0; loop < y; loop++)
        {
            cout << setw(2);
            cout << loop+1 << "|";
            for (int loop2 = 0; loop2 < x; loop2++)
            {
                cout << setw(5);
                if (operation == 'x')
                    cout << ((loop+1)*(loop2+1));
                if (operation == '+')
                    cout << ((loop+1)+(loop2+1));
                if (operation == '-')
                    cout << ((loop+1)-(loop2+1));
                if (operation == '/')
                    cout << ((loop+1)/(loop2+1));
                if (operation == '%')
                    cout << ((loop+1)%(loop2+1));
                if (operation == '&')
                    cout << ((loop+1)&(loop2+1));
                if (operation == '|')
                    cout << ((loop+1)|(loop2+1));
                if (operation == '^')
                    cout << ((loop+1)^(loop2+1));
            }
            cout << endl;
        }
    }
}