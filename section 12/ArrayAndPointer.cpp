#include <iostream>
using namespace std;

int main () {
    int score [] {100,95,50};
    cout << "value of score " << score << endl;
    
    int *score_ptr {score};
    cout << "value of score pointer " << score_ptr << endl; 

    cout << "\nArray subscript Notation................." << endl;
    cout << score[0] << endl;
    cout << score[1] << endl;
    cout << score[2] << endl;

    cout << "\nPointer subscript Notation..............." << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    cout << "\nPointer offset notation....................." << endl;
    cout << score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;
     
    cout << "\nArray offset notation........................" << endl;
    cout << *score << endl;
    cout << *(score + 1) << endl;
    cout << *(score + 2) << endl;

    cout << endl;
    return 0;
 }