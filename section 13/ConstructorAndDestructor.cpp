#include <iostream>
#include <string>



class Player {
    private:
    std::string name;
    int health;
    int xp;

    public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    // overloaded constructors
    Player () {
        std::cout << "No args constructor called" << std::endl;
    }
    Player(std::string name) {
        std::cout << "string arg constructor called" << std::endl;
    }
    Player(std::string name , int health , int xp) {
        std::cout << "Three args constructor called" << std::endl;
    }
    // destructors called
    ~Player() {
        std::cout << "Destructor called for " << name << std::endl;
    }
};

int main() {
    {
        Player mfn;
        mfn.set_name("MFN");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("HERO");
        hero.set_name("Hero");
        Player villain("VILLIAN" , 100 , 12);
        villain.set_name("Villain");
    }

    Player *enemy = new Player;
    enemy -> set_name("Enemy");

    delete enemy;
    return 0;
}