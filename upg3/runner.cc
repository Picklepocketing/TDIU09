#include <string> 
#include <iostream> 
#include <vector>
#include <iomanip>
#include "runner.h" 

void print(Runner_Type const& runner)
{ 
    std::cout << std::right << std::setw(10) << runner.firstName << std::setw(10)  << runner.lastName << std::setw(15) << runner.club << ": ";
    for(int i{0} ; i < runner.times.size(); ++i)
    { 
        std::cout << std::fixed << std::setprecision(2) << runner.times[i] << " ";
    } 
    std::cout << std::endl;
}