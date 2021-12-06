/*4.	C++ Program to Find Quotient and Remainder */
#include<iostream>
using namespace std;

int main(){
     int a, b, c, d;

    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;

    c = a / b;
    cout<<"Quotient of "<<a<<" & "<<b<<" is "<<c <<endl;

    d = a % b;
    cout<<"Reminder of "<<a<<" & "<<b<<" is "<<d <<endl;

}
