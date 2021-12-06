/* 9.	C++ Program to Find Largest Number Among Three Numbers */
#include<iostream>
using namespace std;

int main(){
    int a, b, c;

    cout<<"Enter the Number";
    cin>>a;
    cout<<"Enter the Number";
    cin>>b;
    cout<<"Enter the Number";
    cin>>c;

    if(a>b && a>c){
        cout<<" Number "<<a <<" Greater than "<<b<<" & "<<c<<endl;
    }
    else if(b>a && b>c){
        cout<<" Number "<<b <<" Greater than "<<a<<" & "<<c<<endl;
    }
    else{
        cout<<" Number "<<c <<" Greater than "<<a<<" & "<<b<<endl;
    }
}
