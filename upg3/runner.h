#ifndef RUNNER_H
#define RUNNER_H 

#include <string> 
#include <vector>
struct Runner_Type
{ 
std::string firstName; 
std::string lastName;
std::string club; 
std::vector<double> times;
};

void print(Runner_Type const& runner);

#endif