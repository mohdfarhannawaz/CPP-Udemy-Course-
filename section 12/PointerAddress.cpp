#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {

    // int num{10};
    // cout <<"the value of num : "<< num << endl; // 10
    // cout <<"the sizeof num : "<< sizeof num << endl; // 4 , the other way of displaying sizeof is = sizeof(num)
    //                                                  // both ways are fine
    // cout <<"the address of num : "<< &num << endl; // address of the variable, garbage data i.e, 0xa0317ffc6c

    // int *p;
    // cout << "value of the pointer variable : " << p << endl; // 0
    // cout << "size of the pointer variable : "<< sizeof p << endl; // 8
    // cout << "address of the pointer variable : "<< &p << endl; // 0x74241ff6c8

    // p = nullptr;
    // cout << "value of p after changing is : "<< p << endl; // 0

    // int *p1 {nullptr};
    // double *p2{nullptr};
    // unsigned long long *p3{nullptr};
    // vector<string> *p4{nullptr};
    // string *p5{nullptr};

    // cout <<"value of pointer variable int is : "<< p1 << endl; // 0
    // cout <<"value of pointer variable double is : "<< p2 << endl; // 0
    // cout <<"value of pointer variable unsigned long long is : "<< p3 << endl; // 0
    // cout <<"value of pointer variable vector of strings is : "<< p4 << endl; // 0
    // cout <<"value of pointer variable string is : "<< p5 << endl; // 0

    int temp{10}; 
    double LowTemp{20.34};
    double HighTemp{55.44};

    double *TempPtr; // pointer varible for double datatype

    TempPtr = &LowTemp; // points to low temp
    TempPtr = &HighTemp; // points to high temp
    TempPtr = &temp; // compile error because of different datatype accessing it 
    TempPtr = nullptr; // points to zero

    return 0;
}