#include <iostream>
#include <vector>
using namespace std;
int main() {
    char entry; 
    vector<int>data{3,34,3,534,56,664,43,12,4};
    do{
        cout << "P - print number" << endl;
        cout <<"A - add a number" << endl;
        cout <<"M - mean of the numbers" << endl;
        cout <<"S - display the smallest number" << endl;
        cout <<"L - display the largest number" << endl;
        cout <<"Q - quit" << endl;
        cout <<"Enter your choice : " ;
        cin>> entry;

        if (entry =='p' || entry =='P') {
        if(data.size() == 0)
        cout << "[] - The list is empty."<<endl;
        else 
        {
            cout <<"[";
            for (auto vec : data)
            cout<< vec <<" ";
            cout<<"]" << endl;
        } 
        }
        else if(entry =='a' || entry =='A'){
            int i{};
            cout <<"Enter the digit :";
            cin >> i;
            data.push_back(i);
        }
        else if(entry =='m' || entry == 'M'){
            double mean{} , sum{};
            if (data.size()==0){
                cout <<"The mean is zero."<<endl;
            }
            else{
            for(auto vec : data){
                sum += vec; 
            }
            mean = sum/data.size();
            cout << "The mean is : "<<mean <<endl;
            }
        }
        else if(entry =='s' || entry == 'S'){
            if (data.size() ==0)
            cout <<"There is no data to calculate" << endl;
            else{ 
           int smallest = data.at(0);
            for (auto num : data){
                if(num < smallest)
                smallest = num;
            }
            cout << "The smallest number is "<< smallest << endl;
            }
            }  
        else if(entry =='l' || entry == 'L'){
           if (data.size() == 0)
           cout << " there is no data to calculate"<< endl;
           else {
            int largest = data.at(0);
            for(auto num: data){
                if (num>largest)
                largest = num;
            }
            cout << "The largest number is : " << largest << endl;
           }
        }
        else if (entry =='q' || entry =='Q'){
            cout <<"Good Bye" << endl;
        }
        else
        cout <<"Wrong Selection , choose the given options"<< endl;
        }
     while (entry != 'q' && entry != 'Q'); 
    return 0;
}