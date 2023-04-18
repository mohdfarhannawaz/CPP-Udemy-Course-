#include <iostream>
using namespace std;

// using recursion to find factorial of numbers
// unsigned long long int factorial (unsigned long long int n) { // the unsigned long long int datatype is used to 
//                                             // display the large out put of positive integers as resultant
//     if (n==0)                  
//     return 1;
//     return n*factorial(n-1);
// }

// int main() {
//     int a;
//     cout << "Enter any Number : ";
//     cin>> a ;
//     cout <<  factorial(a) << endl;
//     return 0;
// }

// using recursion to find the fibonacci series of the entered number
int fibonacci (int n) {
    if (n<=1)
    return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main () {
    int a ;
    cout <<"Enter any number : ";
    cin >> a ;
    cout << fibonacci(a) << endl;
    return 0;
}