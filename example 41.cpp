/* 41.C++ program to Reverse a Sentence Using Recursion */
#include<iostream>
using namespace std;

void revStr(char *str) {
   if(*str == '\0')
   return;
   else {
      revStr(str+1);
      cout<<*str;
   }
}
int main() {
   char str[100] ;
   cout<<"Enter the String : ";
   gets(str);
   cout<<"Original String: "<<str<<endl;
   cout<<"***************************************"<<endl;
   cout<<"Reversed String: ";
   revStr(str);
   return 0;
}
