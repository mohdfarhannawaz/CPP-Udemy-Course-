#include <iostream>
using namespace std;

void funct2(int &x , int  y, int z){ // here the result as reference of &x , a which was x is assigned y and y is
// z which was 20
    x += y + z; // so now this equation is result = result + x + y which is 30 + 10 + 20 = 60
}
int funct1(int  a , int b) { // x , y are passed in the formal parameters a , b
    int result {}; 
    result = a + b; // result is the sum of a , b which is 30
    funct2(result,a , b); // result is passed through function 2 which a , b
    return result; // returns result
}
int main () {
    int x {10}; // x is assigned 10
    int y {20}; // y is assigned 20
    int z{}; // z is assigned 0
    z = funct1(x , y); // function 1 is called with x ,y as its parameters
    cout << z << endl; // z is displayed which gets to 60 
    return 0; // program finishes
}