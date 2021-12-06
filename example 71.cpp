/* 71. Write a program in C++ to print a welcome text in a separate line */
#include<iostream>
using namespace std;

int main(){
    char str[50];
    cout<<" Enter the string :";
    gets(str);

    cout<<"Welcome "<<endl;
    cout<<str <<endl;
    return 0;
}
