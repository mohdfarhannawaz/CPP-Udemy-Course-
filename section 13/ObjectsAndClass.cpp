// declaring a class and creating objects of the class
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Accounts {
    // Attributes
    string name;
    double balance;

    // Methods
    bool withdraw (double amount);
    bool deposit (double amount);
};

int main () {
    Accounts Farhan_account;
    Accounts Jim_account; 

    Accounts *Mary_account = new Accounts();
    delete Mary_account;

    return 0;
}