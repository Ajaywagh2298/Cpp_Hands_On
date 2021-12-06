/* 12.C++ Program to Check Leap Year */
#include<iostream>
using namespace std;

int main(){
    int year;

    cout<<"Enter the Year :";
    cin>>year;

    if(year%4==0){
        cout<<year<<" is leap year."<<endl;
    }
    else if(year%400==0){
        cout<<year<<" is leap year."<<endl;
    }
    else{
        cout<<year<<" is not leap year."<<endl;
    }
     return 0;

}
