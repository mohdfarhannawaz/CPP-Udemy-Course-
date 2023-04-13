#include <iostream>
#include <string>
#include <vector>
using namespace std;

// prototypes 
void change1(int &n1);
void change2(int &n2);
void change3(string &s);
void change4(vector<string> &v1);
void print(vector<string> &v2);

// main file

int main() {
    int num1{10} , num2{20};
    vector<string>vec{"stage", "moes", "stalks"};
    string s1{"Farhan"};
    cout << num1 << endl;
    change1(num1);
    cout << num1 << endl;
    cout << num2 << endl;
    change2(num2);
    cout << num2 << endl;
    cout << s1 << endl;
    change3(s1) ;
    cout << s1 << endl;
    print(vec);
    cout << endl;
    change4(vec);
    print(vec);
    cout << endl;
    return 0;
}

// function declaration

void change1(int &n1) {
    n1 = 1000;
}

void change2(int &n2) {
    n2 = 2000;
}

void change3(string &s) {
    s = "Monster";
}

void change4(vector<string> &v1) {
    v1.clear();
}

void print( vector<string> &v2) {
    for (auto write: v2)
    cout << write << " ";
}