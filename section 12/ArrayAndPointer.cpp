#include <iostream>
using namespace std;

int main () {
    int score [] {100,95,50};
    cout << "value of score " << score << endl; //address array is the address of first element of the array
    // lets assume it to be 1000
    int *score_ptr {score}; 
    cout << "value of score pointer " << score_ptr << endl; // same address as the array

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
    cout << *(score_ptr + 1) << endl; // address of the array with addition of data type x bit i.e, 4x1 address 
    cout << *(score_ptr + 2) << endl;
     
    cout << "\nArray offset notation........................" << endl;
    cout << *score << endl;
    cout << *(score + 1) << endl; // address of the array with addition of data type x bit i.e, 4x1 address
    cout << *(score + 2) << endl;

    cout << endl;
    return 0;
 }