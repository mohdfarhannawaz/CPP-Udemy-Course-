#include <iostream>
#include <string>

using namespace std;

class Player {
    private :
    // attributes
    string name {"player"};
    int health;
    int xp;

    public :
    // method
    void talk(string text_to_say) {
        cout << name << " say " << text_to_say << endl;
    }
    bool is_dead();
};

int main() {
    Player frank;
    // frank_name = "Frankss";  // compiler error
    // cout << frank.health << endl;   //compiler error
    frank.talk("hello there");
    return 0;
}