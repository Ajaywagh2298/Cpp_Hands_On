/* 78. Write a program in C++ to check overflow/underflow during various arithmetical operation. */
#include <iostream>
using namespace std;

int main()
{

   int n1 = 2147483647;
   cout <<" Overflow the integer range and set in minimum range : " << n1 + 1 << endl;
   cout <<" Increasing from its minimum range : " << n1 + 2 << endl;
   cout <<" Product is :" << n1 * n1 << endl;

   int n2 = -2147483648;
   cout <<" Underflow the range and set in maximum range : " << n2 - 1 << endl;
   cout <<" Decreasing from its maximum range : " << n2 - 2 << endl;
   cout <<" Product is : " << n2 * n2 << endl;
   return 0;
}
