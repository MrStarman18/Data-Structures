#include <iostream>
#include <stdexcept>

double readSensor()
{
    return 7.8;
}




try
{
    double sensorReading = readSensor();
    std::cout << sensorReading;
}
catch(const std::system_error& e) 
{
    std::cout << e.what();
    reset_system();
}
catch(const std::overflow_error& e) 
{
    std::cout << e.what();
    reset_sensor();
}
catch(const std::exception& all)
{
    std::cout << all.what();
    unknown_fault();
}