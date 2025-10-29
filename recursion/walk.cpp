#include <iostream>
void walk(int steps);
int main () {
    walk(100);
    return 0;
}
void walk(int steps) {
   /* for(int i = 0; i < steps; i++){
        std::cout << "you take a step \n";
    } 
    */
    if(steps > 0){
        std::cout << "you take a step\n";
        walk(steps - 1); //recursion uses more memory and provessing time
    } // helps with trees or big searches
}