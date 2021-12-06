/* 67.C++ Program to use inline function */
#include <iostream>
using namespace std;
inline void displayNumber(int num) {
   cout <<"\t "<< num << endl;
 }
int main() {
    cout << " In-Line Function " << endl;
    displayNumber(4);
    displayNumber(40);
    displayNumber(400);

    return 0;
}
