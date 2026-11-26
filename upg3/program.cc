#include "runner.h"
#include <vector> 
#include <iostream>

using namespace std;
int main()
{  
    
    std::vector<double> testV{9.45,9.55};
    Runner_Type test1{"Helm","Alexander","Abborberget LS",testV}; 
    std::cout << "Efternamn   Förnamn           Klubb: Tider" << endl; 
    std::cout << string(42,'=') << std::endl;
    print(test1);
     print(test1);
      print(test1);
    return 0;
}