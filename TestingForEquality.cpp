#include <iostream>
using namespace std;
int main()
{
    bool True{true};
    bool NotTrue{false};
    int num1 , num2;
    cout << boolalpha;
    cout << noboolalpha;
    cout << " enter any 2 numbers ";
    cin >> num1 >> num2;
    True = (num1 == num2 );
    NotTrue = (num1 != num2 );
    cout <<" Equal:" << True << endl;
    cout <<" Not Equal : " << NotTrue <<endl;
    cout<< noboolalpha;
    return 0;
}