/* 34.C++ Program to Check Whether a Number can be Express as Sum of Two Prime Numbers */
#include<iostream>
using namespace std;


int isPrime(int n);

int main() {
    int n, i;
    bool flag = false;

    cout << "Enter a number : ";
    cin >> n;

    for(i = 2; i <= n/2; ++i) {
        if (isPrime(i)) {
            if (isPrime(n - i)) {
                cout << n << " = " << i << " + " << n-i << endl;
                flag = true;
            }
        }
    }

    if (!flag)
      cout << n << " can't be expressed as sum of two prime numbers.";

    return 0;
}

// Check prime number
int isPrime(int n)
{
    int i;
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for(i = 2; i <= n/2; ++i) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}
