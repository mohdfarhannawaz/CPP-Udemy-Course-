#include <iostream>
using namespace std;
int main ()
{
    int n , Arr[n] , max , min , i;
    cout << "Please enter the no. of array's elements : " << endl;
    cin >> n;
    cout << "Enter the array elements : " << endl;
    for (i = 0; i < n ; i++)
    {
        cin >> Arr[i];
    }
    max = Arr[0];
    min = Arr[0];
    for (i=0 ; i < n ; i++)
    {
        if (max < Arr[i])
        {
            max = Arr[i];
        }
        else if (min > Arr[i])
        {
            min = Arr[i];
        }
    }
    cout << "The maximum element in the array is : " << max << endl;
    cout << "The minimum element in the array is : " << min << endl;
    return 0;
}