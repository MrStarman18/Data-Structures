/*Developers: Justin T. Alexander, John, Jeisson, and Zara
Dates: September 28-30, 2022
Project: Error Handling
This program was developed alongside the worksheet for this week. It details C++ throw/catch exceptions.
*/

#include <string>
#include <algorithm>
#include <iostream>
#include <stdexcept>    //Include exceptions https://en.cppreference.com/w/cpp/error/exception

using namespace std;

class TempConvert {
public:
    double cToF(double c) { return 32  +  c * 9/5; }  
    double fToC(double f) { return (f - 32) * 5/9; }

    std::string normalizeScale(std::string s)
    {
        if (s.empty()) {
            throw std::invalid_argument("Scale is still null.\n");
        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    //converts string to lowercase
        if ((s == "c") || (s.substr(0,4) == "cels")) {return "C";}
        if ((s == "f") || (s.substr(0,4) == "fahr")) {return "F";}
        return "?";
    }

    double convertTemp(double temp, std::string inScale, std::string outScale) {
        inScale = normalizeScale(inScale);
        outScale = normalizeScale(outScale);
        if (inScale == outScale) { return temp; } 
        else if (inScale == "C") { return cToF(temp); } 
        else if (inScale == "F") { return fToC(temp); }
        else                     {throw std::invalid_argument("Invalid inScale units. \n");}
    }

};

int main()
{
    TempConvert tc;
    std::cout << "I am the temp converter.\n";
    std::cout << "Input temp? ";
    double  itemp;
    std::cin >> itemp;
    std::cout << "\nInput units? ";
    std::string iunit;
    std::cin >> iunit;
    std::cout << "\nOutput units? ";
    std::string  ounit;
    std::cin >> ounit;

    try{    //attempt to run following block of code, checking for errors
        double otemp = tc.convertTemp(itemp, iunit, ounit);
        std::cout << "The answer is " << otemp;
    }
    catch(const std::exception& e) {    //catches and prints errors from throw statments
        std::cout << e.what();
    }

    //Version 1 code
    // double otemp = tc.convertTemp(itemp, iunit, ounit);
    // std::cout << "\nThe answer is " << otemp;
}