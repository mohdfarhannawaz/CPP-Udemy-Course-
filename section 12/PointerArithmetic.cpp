#include <iostream>
using namespace std;

int main() {
    cout << "==========================================" << endl;
    int scores[] {100,30,45,59,-2};
    int *score_ptr(scores);

    while (*score_ptr != -2) {
        cout << *score_ptr << endl;
        score_ptr++;
    }
    cout << "======================================" << endl;
    score_ptr = scores;
    while (*score_ptr != -2) {
        cout << *score_ptr++ << endl;
    }

    cout << "========================================" << endl;
    string s1 {"frank"};
    string s2 {"frank"};
    string s3 {"shivam"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha;
    cout << p1 << " == " << p2 << " : " << (p1==p2) <<endl;
    cout << p1 << " == " << p3 << " : " << (p1==p3) <<endl;
    cout << *p1 << " == " << *p2 << " : " << (*p1==*p2) <<endl;
    cout << *p1 << " == " << *p3 << " : " << (*p1==*p3) <<endl;
    
    p3 = &s3;
    cout << p1 << " == " << p3 << " : " << (p1==p3) <<endl;
    cout << *p1 << " == " << *p3 << " : " << (*p1==*p3) <<endl;
    
    cout << "======================================" << endl;
    char name[] {"frank"};
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    char_ptr1 = &name[0];
    char_ptr2 = &name[4];
    cout << "in the string " << name << " "<<*char_ptr1 <<" is " << (char_ptr2 - char_ptr1)
     << " characters away from "<< *char_ptr2 << endl;
    return 0;
}