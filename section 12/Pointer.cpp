#include <iostream>
using namespace std;

int main () {
    int num{10};
    cout <<"the value of num : "<< num << endl; // 10
    cout <<"the sizeof num : "<< sizeof num << endl; // 4 , the other way of displaying sizeof is = sizeof(num)
                                                     // both ways are fine
    cout <<"the address of num : "<< &num << endl; // address of the variable, garbage data i.e, 0xa0317ffc6c
    return 0;
}