/* 25.C++ Program to Check Whether a Number is Prime or Not */
#include<iostream>
using namespace std;

int main(){
    int num, i, m, flag = 0;
  cout<<"Enter the positive integer: ";
  cin>>num;
  m = num / 2;

  for (i = 2; i <= m; ++i) {
    if (num % i == 0) {
      flag = 1;
      break;
    }
  }

    if (flag == 0)
    {
      cout<<num<<" is a Prime Number."<<endl;
    }
    else
    {
      cout<<num<<" is a Not Prime Number."<<endl;
    }
   return 0;
}
