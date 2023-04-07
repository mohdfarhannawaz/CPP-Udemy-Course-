#include<iostream>
#include<string>
#include<vector>
using namespace std;
//function prototype
void Pass_By_Value1(int num);
void Pass_By_Value2(string s);
void PassByValue3(vector<string>vi);
// function definition
void Pass_By_Value1(int num){
    num=1000;
}
void Pass_By_Value2(string s){
    s="changed";
}
void PassByValue3(vector<string>vi) {
    vi.clear();
void PrintVector(vector<string>vi) {
    for(auto s:vi)
    cout<<s<<" ";
    cout<<endl;
}
}
int main(){
    int num{10};
    int anotherNum{20};
    vector<string>stage{"mohd","Farhan","nawaz"};
    cout<<"Value before passing "<<num<<endl;
    Pass_By_Value1(num);
    cout<<"Value after passing "<<num<<endl;
    cout<<"Value before passing "<<anotherNum<<endl;
    Pass_By_Value1(anotherNum);
    cout<<"Value after passing "<<anotherNum<<endl;
    string name{"Frank"};
    cout<<"Value before passing "<<name<<endl;
    Pass_By_Value2(name);
    cout<<"Value after passing "<<name<<endl;
    
    cout<<"Before changing : ";
    PrintVector(stage);
    PassByValue3(stage);
    cout<<"Value after changing : ";
    PrintVector(stage);
    return 0;

}