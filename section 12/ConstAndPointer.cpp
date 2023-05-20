#include <iostream>
using namespace std;

int main() {
    int high_score {100};
    int low_score {33};
    cout << "Pointer to Constant" << endl;
    const int *score_ptr {&high_score};
    *score_ptr = 86; // error
    score_ptr = &low_score; // ok
    cout << "------------------------"<< endl;
    cout << "Constant Pointer" << endl;
    int *const score_ptr {&high_score};
    *score_ptr = 86; // ok
    score_ptr = &low_score; // error
    cout << "----------------" << endl;
    cout << "Constant Pointer to Constants" << endl;
    const int *const score_ptr {&high_score};
    *score_ptr = 86; // error
    score_ptr = &low_score; // error
}