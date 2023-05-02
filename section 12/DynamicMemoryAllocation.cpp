#include <iostream>
using namespace std;

int main (){
    int *int_ptr {nullptr}; // initialized a array pointer and set it to zero
    cout << int_ptr << endl; // value of int ptr is 0
    int_ptr = new int ;
    cout << int_ptr << endl; // 0x23543aba740
    delete int_ptr;
    
    size_t size {0};
    double *double_ptr {nullptr};
    cout << double_ptr << endl; // 0
    cout << "how many size do you want : " ;
    cin >> size ; // entered any value
    double_ptr = new double[size];
    cout << double_ptr << endl; // address of the first array element
    
    delete double_ptr;
    return 0;
}