#include<iostream>
using namespace std;
/*
FUNCTION PROTOTYPE is method first declaring a parameterized
or a non parameterized function and then later declaring and
giving it a body.*/
void say_hello();//prototype
void say_hello(){
    cout<<"Hello World!"<<endl;
}
int main(){
    say_hello();
    return 0;
}