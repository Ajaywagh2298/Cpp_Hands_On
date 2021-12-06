/* 6.	C++ Program to Swap Two Numbers */

#include<iostream>

using namespace std;

int main(){
      int a, b, temp;

    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;

    cout<<"a= "<< a <<endl;
    cout<<"b= "<< b <<endl;


    temp = a;
    a = b;
    b = temp;
    cout<<"------------------------------------------"<<endl;
    cout<<"temp = a;"<<endl;
    cout<<"a = b;"<<endl;
    cout<<"b = temp;"<<endl;
    cout<<"------------------------------------------"<<endl;

    cout<<"a= "<< a <<endl;
    cout<<"b= "<< b <<endl;
}
