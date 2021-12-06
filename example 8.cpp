/* 8.	C++ Program to Check Whether a character is Vowel or Consonant. */
#include<iostream>

using namespace std;

int main(){
    char c;
    int isVowel;

    cout << "Enter an alphabet: ";
    cin >> c;


 isVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' );


    if (!isalpha(c))
      printf("");
    else if (isVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
}
