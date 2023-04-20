#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
    int num{10};
    int *ptr {&num};
    cout <<"the number is : " << num << endl; // 10
    cout <<"address of num : " << ptr << endl; // any garbage value
    cout <<"address of num using the & operator : " << &num << endl; // same address as pointer i.e. same garbage value as above
    cout <<"dereferencing the pointer : "<< *ptr << endl; // 10
    
    // changing the value of num 
    num = 300; // changed from 10 to 300
    cout << "the value of the changed num : " << *ptr << endl; // 300
    string name {"farhan"};
    string *ptr2 {&name};
    cout << ptr2 << endl; // garbage value
    cout << *ptr2 << endl; // farhan 
    name = "nawaz" ;
    cout << *ptr2 << endl;

    vector<string>s1 {"harry", "moe","curly"};
    vector <string> *vector_ptr{nullptr};
    vector_ptr = &s1;
    cout << (*vector_ptr).at(0) << endl; // harry
    cout << (*vector_ptr).at(1) << endl ; // moe
    for (auto stooge : *vector_ptr){
        cout << stooge << " "; // harry moe curly
    }


    return 0;
}