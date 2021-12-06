/* 37.C++ Program to Find G.C.D Using Recursion */
#include<iostream>
using namespace std;
int cal(int a, int b);

int main(){
    int num1, num2;

 cout << "Enter two numbers\n";
    cin >> num1;
    cin >> num2;

    cout << "GCD of [ " << num1 << " and " << num2 << " ] is : " << cal(num1, num2)<<endl;

    return 0;
}


 int cal(int a, int b) {
  if (b == 0) {
    return a;
  }
  else {
    return cal(b, a % b);
  }
}
