/* 33.C++ Program to Check Prime Number By Creating a Function */
#include<iostream>

using namespace std;

int isPrime(int num);

int main() {
  int num;
  cout << "Enter a  number :";
  cin >> num;

  if(isPrime(num))
      cout << num << " is a Prime Number"<<endl;
  else
      cout << num << " is NOT a Prime Number"<<endl;

  return 0;
}

int isPrime(int num){
  bool isPrime = true;
  int i;

  for(i = 2; i <=(num/2); ++i) {
      if(num%i==0) {
          isPrime=false;
          break;
      }
  }

  return isPrime;
}
