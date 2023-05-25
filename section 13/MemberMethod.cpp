// implementing member methods 1

// include guards
// ifndef _ACCOUNTS_H_
// define _ACCOUNTS_H_

#include <iostream>
#include <string>

using namespace std;

class Account {
    private :
    // attributes 
    string name;
    double balance;

    public :
    // methods
    // declare inline 
    void set_balance (double bal) {
        balance = bal;
    }
    double get_balance () {
        return balance;
    }

    // methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();
};
 // #endif

void Account :: set_name(string n) {
    name = n;
}

string Account :: get_name() {
    return name;
}

int main() {
    Account frank_account;
    frank_account.set_name("admin");
    frank_account.get_name();
    frank_account.set_balance(200);
    frank_account.get_balance();
    cout << "Use a Debugger to watch the flow of program and better understanding" << endl;
    return 0;
}
