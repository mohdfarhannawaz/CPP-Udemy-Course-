// Inline Function
#include <iostream>
using namespace std;

inline int  add_numbers(int a , int b) { // function definition with the Inline Keyword
   return a + b; 
}

int main() {
    int result{};
    result = add_numbers(10,20); // function call
    cout << result << endl;
    return 0;
}