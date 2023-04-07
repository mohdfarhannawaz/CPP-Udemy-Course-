#include<iostream>
using namespace std;

//Area of Circle and Volume of a Cylinder
// int AreaOfCircle(){ 
//     cout<<"Enter the radius of the Circle : ";
//     float radius;
//     cin>>radius;
//     double area=3.14*radius*radius;
//     cout<<"The Area of Circle is : "<<area;
//     return 0;
// }
// int VolumeOfCylinder(){
//     float height,radius;
//     cout<<"\nEnter the radius and height of the Cylinder : ";
//     cin>>radius>>height;
//     double Volume=3.14*radius*radius*height;
//     cout<<"The Volume of the Cylinder is : "<<Volume;
//     return 0;
// }

double area(double radius){
    return 3.14*radius*radius;
}
double volume(double radius,double height){
    return 3.14*radius*radius*height;
}

void AreaOfCircle(){
    double radius;
    cout<<"Enter the radius of the circle :";
    cin>>radius;
    cout <<"Area of the circle is : "<<area(radius);
}
void VolumeOfCylinder(){
    double radius,height;
    cout<<"\nEnter the radius of Cylinder : ";
    cin>>radius;
    cout<<"Enter the height of Cylinder : ";
    cin>>height;
    cout<<"Volume of the Cylinder is : "<<volume(radius,height);
}

int main(){
    AreaOfCircle();
    VolumeOfCylinder();
    return 0;
}
