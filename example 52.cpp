/* 52.C++ Program to Find the Frequency of Characters in a String */
#include <iostream>
using namespace std;
int main(){
    string str = "I Am Ajay Wagh ";
    cout<<str<<endl;
    char checkChar= 'a';
    int c = 0;
    for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == checkChar)
                {
                    ++ c;
                }
        }
        cout << "Number of " << checkChar<< " = " << c;

    return 0;
}
