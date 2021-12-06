/* 74. Write a program in C++ to print the sum of two numbers using variables */
#include<iostream>
using namespace std;

int main(){
    long a, b, sum;

    cout << "Enter the 1 number : ";
    cin>>a;

    cout << "Enter the 2 number : ";
    cin >> b;

    sum = a + b;

    cout << "Sum of "<< a <<" & "<< b <<" is : " << sum << endl;

    return 0;
}
