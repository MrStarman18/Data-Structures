/*Developers: Justin T. Alexander, John, Jeisson, and Zara
Dates: September 19-23, 2022
Project: Letter Grade
This program was developed alongside the worksheet for this week.
*/

#include <iostream>
using namespace std;

char getLtrGrade(double score) {
    if (score >= 90.0) return 'A';
    else if (score >= 80.0) return 'B';
    else if (score >= 70.0) return 'C';
    else if (score >= 60.0) return 'D';
    else                    return 'F';

}

double getPoints(char grade) {
    if (grade == 'A') return 4.0;
    else if (grade == 'B') return 3.0;
    else if (grade == 'C') return 2.0;
    else if (grade == 'D') return 1.0;
    else if (grade == 'F') return 0.0;
    else return '?';
}

// void getPointsA() {
//     cout << "getPointsA:" << (4.0 == getPoints('A')) << endl;
// }
// void getPointsB() {
//     cout << "getPointsB:" << (3.0 == getPoints('B')) << endl;
// }
// void getPointsC() {
//     cout << "getPointsC:" << (2.0 == getPoints('C')) << endl;
// }
// void getPointsD() {
//     cout << "getPointsD:" << (1.0 == getPoints('D')) << endl;
// }
// void getPointsF() {
//     cout << "getPointsF:" << (0.0 == getPoints('F')) << endl;
// }
// void getPointsAll() {
//     //getPointsA();
//     getPointsB();
//     getPointsC();
//     getPointsD();
//     getPointsF();
// }

// int main()
// {
//     cout << "Section A\n";
//     cout << "Expected inputs\n";
//     cout << "100: " << getLtrGrade(100) << endl;
//     cout << "90: " << getLtrGrade(90) << endl;
//     cout << "89: " << getLtrGrade(89) << endl;
//     cout << "80: " << getLtrGrade(80) << endl;
//     cout << "Unexpected inputs\n";
//     cout << "-10: " << getLtrGrade(-10) << endl;
//     cout << "+110: " << getLtrGrade(+110) << endl;
//     cout << "-1000: " << getLtrGrade(-1000) << endl;
//     cout << "1000: " << getLtrGrade(1000) << endl;
//     cout << "Min double: " << getLtrGrade(std::numeric_limits<double>::min()) << endl;  //Mininum allowed double
//     cout << "Max double: " << getLtrGrade(std::numeric_limits<double>::max()) << endl;  //Maximum allowed double

//     cout << "Section B\n";
//     getPointsAll();

//    return 0;
// }
