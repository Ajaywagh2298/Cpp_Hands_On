/* 36.C++ program to Calculate Factorial of a Number Using Recursion */
#include<iostream>
using namespace std;

int main(){
    int fact(int);
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    cout<<"Factorial of a [ "<<num<<" ] is: "<<fact(num)<<endl;
    return 0;
    }

int fact(int n){
    if(n<0)
    return(-1);

    if(n==0)
        return(1);
    else
    {
        return(n*fact(n-1));
    }
}
