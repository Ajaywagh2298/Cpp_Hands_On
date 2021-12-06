/* 77. Write a program in C++ to display various type or arithmetic operation using mixed data type */
#include <iostream>

using namespace std;

int main()
{
   int m1 = 4, m2 = 9;
   double d1 = 5.7, d2 = 18.0;



   cout<<"**********************************************************"<<endl;
   cout <<"\t"<< m1 << " + " << m2 << " = " << m1+m2 << endl;
   cout <<"\t"<< d1 << " + " << d2 << " = " << d1+d2 << endl;
   cout <<"\t"<< m1 << " + " << d2 << " = " << m1+d2 << endl;

   cout<<"**********************************************************"<<endl;
   cout <<"\t"<< m1 << " - " << m2 << " = " << m1-m2 << endl;
   cout <<"\t"<< d1 << " - " << d2 << " = " << d1-d2 << endl;
   cout <<"\t"<< m1 << " - " << d2 << " = " << m1-d2 << endl;

   cout<<"**********************************************************"<<endl;
   cout <<"\t"<< m1 << " * " << m2 << " = " << m1*m2 << endl;
   cout <<"\t"<< d1 << " * " << d2 << " = " << d1*d2 << endl;
   cout <<"\t"<< m1 << " * " << d2 << " = " << m1*d2 << endl;

   cout<<"**********************************************************"<<endl;
   cout <<"\t"<< m1 << " / " << m2 << " = " << m1/m2 << endl;
   cout <<"\t"<< d1 << " / " << d2 << " = " << d1/d2 << endl;
   cout <<"\t"<< m1 << " / " << d2 << " = " << m1/d2 << endl;
   cout<<"**********************************************************"<<endl;
   return 0;
}
