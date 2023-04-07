#include<iostream>
#include<string>
#include<vector>
using namespace std;
//function prototype
void Pass_By_Value1(int num);
void Pass_By_Value2(string s);
// void PassByValue3(vector<string>v);
// function definition
void Pass_By_Value1(int num){
    num=1000;
}
void Pass_By_Value2(string s){
    s="changed";
}
void PassByValue3(vector<string>v){
    for (auto s:v)
    cout<<s<<" ";
    cout<<endl;
}
int main(){
    int num{10};
    int anotherNum{20};
    cout<<"Value before passing"<<num<<endl;
    Pass_By_Value1(num);
    cout<<"Value after passing"<<num<<endl;
    cout<<"Value before passing"<<anotherNum<<endl;
    Pass_By_Value1(anotherNum);
    cout<<"Value after passing"<<anotherNum<<endl;
    string s{"Frank"};
    cout<<"Value before passing"<<s<<endl;
    Pass_By_Value2(s);
    cout<<"Value after passing"<<s<<endl;
    
    return 0;

}