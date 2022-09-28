/*Developer: Justin T. Alexander
Class: CS2233-01
Date: September 23, 2022
Project: Creating a Class
This program creates a simple class.*/
#include <iostream>

class Time
{
    int hours, minutes;
    double seconds;
public:
    int getHours() {return hours;}
    int getMinutes() {return minutes;}
    double getSeconds() {return seconds;}

    void setHours(int h) {hours = h;}
    void setMinutes(int m) {minutes = m;}
    void setSeconds(double s) {seconds = s;}

    Time()
    {
        hours = 0; minutes = 0; seconds = 0.0;
    }
    Time(int h, int m, double s)
    {
        hours = h; minutes = m; seconds = s;
    }
};
