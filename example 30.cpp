/* 30.C++ Programs To Create Pyramid and Pattern */
#include<iostream>
using namespace std;

int main(){
    int row, j, n;

  cout<<"Enter the number of rows :";
  cin>>n;

  for (row = 1; row <= n; row++)
  {
    for (j = 1; j <= n-row; j++)
      cout<<"\t";

    for (j = 1; j <= 2*row - 1; j++)
      cout<<"*\t";

    cout<<"\n\n";
  }

  return 0;
}
