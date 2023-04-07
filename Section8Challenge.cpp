#include <iostream>
using namespace std;
int main () 
{
    int cents{0} , dollars {0}, quaters{0} , dimes{0} , nickels{0} , pennies {0};
    cout <<"Enter the no. of cents : "<< endl;
    cin >> cents;
    dollars = cents/ 100;
    cents -= 100*dollars;
    cout << "The No. of Dollars : " << dollars <<endl;
    quaters = cents / 25;
    cents -= 25*quaters;
     cout << "The No. of Quaters : " << quaters << endl;
    dimes = cents/ 10;
    cout << "The no. of dimes : " << dimes << endl;
    cents -= 10*dimes;
    nickels = cents / 5;
    cents -= 5*nickels;
    cout << "The no. of nickels : " << nickels << endl;
    pennies = cents;
    cout << "The no. of pennies : "<< pennies << endl;
    return 0;
    
}