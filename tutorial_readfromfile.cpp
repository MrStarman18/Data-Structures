#include <iostream>
#include <fstream>  //required for file operations
#include <string>

using namespace std;

int main()
{
    ofstream myFile_Handler;    //used to set the file as the ostream object
    string myLine;  //used when reading from file

    // File Open
    myFile_Handler.open("File_1.txt");

    // Write to the file
    myFile_Handler << "This is a sample test File. " << endl;
    myFile_Handler << "This is the second line of the file. " << endl;

    if(myFile_Handler.is_open())
    {
        // Keep reading the file
        while(getline(myFile_Handler, myLine))
        {
            // print the line on the standard output
            cout << myLine << endl;
        }
    // File Close
        myFile_Handler.close();
    }
    else
    {
        cout << "Unable to open the file!";
    }
    return 0;
}