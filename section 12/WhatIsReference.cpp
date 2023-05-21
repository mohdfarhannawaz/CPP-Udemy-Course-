#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int num {100};
    int &ref {num};

    cout << num << endl; // 100
    cout << ref << endl; // 100

    num = 200;
    cout << "----------------" << endl;
    cout << num << endl; // 200
    cout << ref << endl; // 200

    ref = 300;
    cout << "-------------------" << endl;
    cout << num << endl; // 300
    cout << ref << endl; // 300

    cout << "---------------------" << endl;
    vector <string> stooges {"larry","moe","curly"};

    for (auto str:stooges)
        str = "funny"; // str is a copy of the each vector element
    
    for (auto str:stooges)  // no changes
        cout << str << endl;  
    
    cout << "------------------------" << endl;

    for (auto &str : stooges) // str is a reference to each vector element 
        str = "funny"; 
    
    for (auto const &str : stooges) // notice we are using const
        cout << str << endl;  // now the vector element have changed
    
    cout << endl;
    


    return 0;
}