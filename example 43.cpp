/* 43.C++ Program to Calculate Average of Numbers Using Arrays */
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    double sum=0, average=0;

    cout << "Enter the number for create an array: ";
    cin >> n;


    int arr[n];

    cout << "Enter " << n << " integers into an array : "<<endl;

    for (i = 0; i < n; i++)
    {
        cout << " Enter arr [ " << i << " ] : ";
        cin >> arr[i];
    }


    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    average = sum/n;

    cout << "The Sum of the number : " << sum <<endl;

    cout << "The Average of the number: " << average <<endl;

    cout << "\n\n";

    return 0;
}
