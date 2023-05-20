#include <iostream>
#include <vector>
#include <string>

using namespace std;

// void double_data(int *int_ptr) {
//     *int_ptr *= 2;
// } 

// int main() {
//     int value {10};
//     int *ptr_value {nullptr};

//     cout << "Value : "<< value << endl;
//     double_data(&value);
//     cout << "Value : " << value << endl;

//     cout << "----------------------" << endl;
//     ptr_value = &value;
//     double_data(ptr_value);
//     cout << "Value : " << value << endl;

//     cout << endl;
//     return 0;
// }



// void swap(int *a , int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x {100} , y {200};
//     cout << "\nx " << x << endl;
//     cout << "\ny " << y << endl;
    
//     cout << "----------------------" << endl;

//     swap (&x , &y);
//     cout << "x " << x << endl;
//     cout << "y " << y << endl;
//     cout << endl;
//     return 0;
// }


void display ( vector <string> *v ) {
    (*v).at(0) = "funny";
    for (auto str : *v)
    cout << str << " ";
    cout << endl;
    
    v = nullptr;
}
void display(int *array , int sentinel) {}

int main() {
    cout << "------------------------" << endl;
    vector<string> stooges{"larry", "moe", "curly"};
    display(&stooges);


    cout << endl;
    return 0;
}