/* 13.C++ Program to Find Factorial */
#include<iostream>
using namespace std;

int main(){
    int start,fact=1,n;
    cout<<"Enter the Number :";
    cin>>n;


    for(start=1;start<=n;start++){

      fact=fact*start; // (n-1)*(n-2)*(n-3)....
  }
  cout<<"Factorial of given "<<n<<" is "<<fact<<endl;

}
