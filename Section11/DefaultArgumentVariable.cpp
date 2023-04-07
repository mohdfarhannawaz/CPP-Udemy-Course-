#include<iostream>
using namespace std;
double cost(double base, double tax=0.06,double fee=100);
double cost(double base,double tax,double fee){
    return base+=(base*tax)+fee;
}
int main(){
    double total{};
    total=cost(1000);
    cout<<total;
    return 0;

}