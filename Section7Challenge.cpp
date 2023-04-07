 
           // SECTION 7 ARRAYS AND VECTORS 
           // -- CHALLENGE EXERCISE

#include <iostream>
#include <vector> // declared to use the vectors
using namespace std;

int main()
{
    vector<int>vector1{}; // first vector declared
    vector<int>vector2{}; // second vector declared

    vector1.push_back(10); // 10 is added to first vector
    vector1.push_back(20); // 20 is added to second vector
    cout<<vector1.at(0)<<endl; // element at 1st position in vector 1
    cout<<vector1.at(1)<<endl; // element at 2nd position in vector 1
    cout<<vector1.size()<<endl; // size of vector 1

    vector2.push_back(100); // 100 added to second vector 
    vector2.push_back(200); // 200 added to second vector
    cout<<vector2.at(0)<<endl; // element at 1st position in vector 2
    cout<<vector2.at(1)<<endl; // element at 2nd position in vector 2
    cout<<vector2.size()<<endl; // size of vector 2


    vector<vector<int>>vector_2d; // a 2d vector declared
    vector_2d.push_back(vector1); // vector 1 added to 2d vector
    vector_2d.push_back(vector2); // vector 2 added to 2d vector
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
    vector1.at(0) = 1000;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    return 0;
}