/* 15.C++ Program to Display Fibonacci Series */
#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3, number,n, i, flag = 0,m;

    num1 = 0;
    num2 = 1;

    cout<<"Enter the Number : ";
    cin>>number;

    cout<<" The Fibonacci Series : - "<<endl;

    cout<<num1<<"\t"<<num2;

    for (i=2 ;i <= number;++i)
    {
        num3 = num1 + num2;

       cout<<"\t"<<num3;
        num1 = num2;
        num2 = num3;
    }
  return 0;
}
