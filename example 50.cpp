/* 50.C++ Program to Access Elements of an Array Using Pointer */
#include <iostream>
using namespace std;

int main()
{
   int arr[5];
   cout <<" Enter integers: \n"<<endl;

   for(int i = 0; i < 5; ++i){
      cout <<"\t";
      cin >> arr[i];
      cout << endl;
   }

   cout <<" You integers: "<<endl;
   for(int i = 0; i < 5; ++i){
      cout <<"\t";
      cout <<*(arr + i);
      cout << endl;
   }
   return 0;
}
