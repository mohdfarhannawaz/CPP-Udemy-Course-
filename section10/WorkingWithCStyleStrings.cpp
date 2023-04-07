#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char firstname[40]{};
    char lastname[40]{};
    char fullname[80]{};
    char temp[80]{};
    // cout <<"Enter your first name : ";
    // cin >>firstname;
    // cout <<"Enter your last name : ";
    // cin >> lastname;
    // cout <<"The no. of char in "<<firstname<<" is "<< strlen(firstname)<< endl;
    // cout <<"The no. of char in "<<lastname<<" is "<< strlen(lastname)<< endl;
    // strcpy(fullname , firstname);
    // strcat(fullname, " ");
    // strcat(fullname, lastname);
    // cout <<"Your full name is "<< fullname << endl;
    // cout <<"The no. of char in "<<fullname<<" is "<< strlen(fullname)<< endl;
    cout <<"Enter your full name : ";
    cin.getline(fullname , 80);
    cout <<"Your full name is : "<< fullname << endl;
    strcpy(temp , fullname);
    if(strcmp(temp , fullname)== 0)
    cout <<"Both are of same size "<< temp <<" and "<<fullname << endl;
    else
    cout <<"Both are of different size "<< temp <<" and "<<fullname << endl;
}