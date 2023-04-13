#include <iostream>
using namespace std;

int num{5}; // num is 5

int main() {
    cout << num << endl; // prints 5
    int num {200}; // num changed to 200
    cout << num  << endl; // prints 200
    {
        cout << num << endl; // prints 200 
        int num {400}; // num changed to 400
        cout << num << endl; // prints 400
    }
    cout << num << endl; // prints 200
    static int num1 {1000}; // assigns 1000
    num1 = (num1 + num1);
    cout << num1 << endl; // prints 2000
     {
        cout << num1 << endl; // prints 1000
        int num1 {400}; // num changed to 400
        cout << num1 << endl; // prints 400
    }
    return 0; 

}