#include <iostream>
using namespace std;

int main (){
    int *int_ptr {nullptr}; // initialized a array pointer and set it to zero
    cout << int_ptr << endl; // address of int ptr is 0
    int_ptr = new int ; // create the int at heap memory using new keyword
    cout << int_ptr << endl; // new address in the heap is 0x23543aba740
    delete int_ptr; // deleted the int variable from the heap to free up storage
    
    size_t size {0}; // declared the size variable
    double *double_ptr {nullptr};  // intialized a double datatype array
    cout << double_ptr << endl; // address of the array 0
    cout << "how many size do you want : " ; // taking the size from the user
    cin >> size ; // entered any value
    double_ptr = new double[size]; // providing the memory to the double array in the heap 
    cout << double_ptr << endl; // address of the first array element in the heap memory
    
    delete double_ptr; // deleted the array to free up space
    return 0;
}