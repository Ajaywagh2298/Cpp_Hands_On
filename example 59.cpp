/* 59.C++ Program to Store Information of a Student in a Structure */
#include <iostream>
using namespace std;
struct student
{
char name[60],add[50];
int roll;
float per;
};
student s;
int main()
{

cout << "Enter Details," << endl;
cout << "Enter Name : ";
cin >> s.name;

cout << "Enter Roll No : ";
cin >> s.roll;

cout << "Enter Address : ";
cin >> s.add;

cout << "Enter percentage : ";
cin >> s.per;

cout<<endl<<endl;
cout << "Displaying Student Information :" << endl;
cout << "Name: " << s.name << endl;
cout << "Roll: " << s.roll << endl;
cout << "Address : " << s.add << endl;
cout << "percentage: " << s.per << endl;
return 0;
}
