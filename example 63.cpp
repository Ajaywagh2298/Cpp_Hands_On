/* 63.C++ Program to Store and Display Information Using Structure */
#include <iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
} s[05];
int main(){

    int n;
    cout<<"How many student you like to add :";
    cin>>n;
    cout << "Enter students Details : " << endl;
    for(int i = 0; i < n; ++i)
    {
        cout << "Roll number : ";
        cin >> s[i].roll;
        cout << "Enter name : ";
        cin >> s[i].name;
        cout << "Enter marks : ";
        cin >> s[i].marks;
        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    for(int i = 0; i < n; i++)
    {
    cout << "\nRoll number : " << s[i].roll<< endl;
    cout << "Name : " << s[i].name << endl;
    cout << "Marks : " << s[i].marks << endl;
    }
    return 0;
}
