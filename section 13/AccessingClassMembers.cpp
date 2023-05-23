#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    public :
    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk (string text_to_say) {
        cout << name << " says " << text_to_say;
    }
    bool is_dead();
};

class Account {
    public :
    //attributes
    string name;
    double balance;

    // methods
    bool deposit(double bal) {
        balance += bal;
        cout << "\nin deposit : ";
        return balance;
    }
    bool withdraw(double bal) {
        balance -= bal;
        cout << "\nwithdraw : ";
        return balance;
    }
};

int main() {
    Player frank;
    frank.name = "frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("hii there, how are you");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I am going to destroy you");

    Account frank_account;
    frank_account.name = "frank";
    frank_account.balance = 100.00;
    frank_account.withdraw(300.00);
    frank_account.deposit(222.00);

    Account *farhan = new Account;
    (*farhan).name = "farhan";
    (*farhan).balance = 20.00;
    farhan->deposit (299.00);
    farhan->withdraw(2000.00);
    return 0;
}