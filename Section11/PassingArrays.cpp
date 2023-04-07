#include<iostream>
using namespace std;

// void print_array(int num[], size_t size);
// void zero_array(int nums[], size_t size){
//     for(size_t i=0;i<size;++i)
//     nums[i]=0;
//     nums[0]=999;
// }

// int main(){
//     int mynum[]={1,2,3,4,5,6};
//     print_array(mynum,6);
//     cout<<endl;
//     zero_array(mynum,6);
//     print_array(mynum,6);
//     return 0;
// }

// void print_array(int num[], size_t size){
//     for(size_t i{0};i<size;i++)
//     cout<<num[i]<<" ";
//     num[i]
// }

void print_array(int arr[],size_t size);
void set_array(int arr[],size_t size);

void print_array(int arr[],size_t size){
    for(size_t i{0};i<size;++i)
    cout<<arr[i]<<" ";
    cout<<endl;
    arr[0]=6666;
}

void set_array(int arr[],size_t size,int value){
    for(size_t i{0};i<size;++i)
    arr[i]=value;
}
//main file

int main(){
    int my_score[]{1000,98,90,86,83};

    print_array(my_score,5);
    print_array(my_score,5);
    set_array(my_score,5,1000);
    print_array(my_score,5);
    print_array(my_score,5);

    cout<<endl;
    return 0;
}