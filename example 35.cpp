/* 35.C++ program to Find Sum of Natural Numbers using Recursion */
#include<iostream>
using namespace std;

int sum(int num);
int main() {
    int num;
   cout<<"Enter the number";
   cin>>num;
   cout<<"Sum of first [ "<<num<<" ] natural numbers is : "<<sum(num);
   return 0;
}
int sum(int num) {
   if(num == 0)
   return num;
   else
   return num + sum(num - 1);
}
