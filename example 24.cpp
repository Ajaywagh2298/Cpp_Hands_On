/* 24.C++ Program to Check Whether a Number is Palindrome or Not */
#include<iostream>

using namespace std;

int main(){
    int num, rev = 0, remain, real;
    cout<<"Enter the number : ";
    cin>>num;

    real = num;

    while(num != 0){
        remain = num % 10;
        rev = rev * 10 + remain;
        num /= 10;
    }
    if(real == rev){
        cout<<real<<" is the a palindrome. "<<endl;
    }
    else{
        cout<<real<<" is not a palindrome. "<<endl;
    }

}
