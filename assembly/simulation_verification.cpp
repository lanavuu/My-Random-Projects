#include <iostream>
// Extra verification using C++ simulating 1+2+3+..+99= for CPSC 240 assignment 06
int main(){

int result = 0;

    for (int i = 0; i<=99 ; i++)
        result += i;
        
    
    std::cout << "1+2+3+..+99 = " << result;
    return 0;
}