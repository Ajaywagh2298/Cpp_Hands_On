/* 80. Write a program in C++ to formatting the output */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

   double pi = 3.14159265;
   cout << fixed << setprecision(4);
   cout <<" The value of pi : " << pi << endl;
   cout << " The value of pi 4 decimal place of total width 8   :  " << setw(8) << pi <<  endl;
   cout << " The value of pi 4 decimal place of total width 10  :  " << setw(10) << pi <<  endl;

   cout << setfill('-');
   cout << " The value of pi 4 decimal place of total width 8   :  " << setw(8) << pi <<  endl;
   cout << " The value of pi 4 decimal place of total width 10  :  " << setw(10) << pi << endl;

   cout << scientific;
   cout <<" The value of pi in scientific format is : " << pi << endl;

   bool done = false;
   cout <<" Status in number : " << done << endl;
   cout << boolalpha;
   cout <<" Status in alphabet : " << done << endl;
   cout << endl;
   return 0;
}

