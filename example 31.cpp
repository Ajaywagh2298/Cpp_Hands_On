/* 31.C++ Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case */
#include<iostream>
using namespace std;

int main(){
    int a, b, add, sub, mul, div, ch;

    cout<<"************MENU************"<<endl;
    cout<<"1. Addition "<<endl;
    cout<<"2. Subtract "<<endl;
    cout<<"3. Multiplication "<<endl;
    cout<<"4. Divide "<<endl;

    cout<<"Enter the choose : ";
    cin>>ch;

    switch(ch){
    case 1:
        cout<<"Enter the first number : ";
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;

        add = a + b;

        cout<<" Addition of [ "<<a<<" + "<<b<<" ] = "<<add<<endl;
        break;

    case 2:
        cout<<"Enter the first number : ";
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;

        sub = a - b;

        cout<<" Substract of [ "<<a<<" - "<<b<<" ] = "<<sub<<endl;
        break;


    case 3:
        cout<<"Enter the first number : ";
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;

        mul = a * b;

        cout<<" Multiplication of [ "<<a<<" * "<<b<<" ] = "<<mul<<endl;
        break;


    case 4:
        cout<<"Enter the first number : ";
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;

        div = a / b;

        cout<<" Divide of [ "<<a<<" \ "<<b<<" ] = "<<div<<endl;
        break;



    }
}
