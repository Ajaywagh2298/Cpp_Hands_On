/* 21.C++ Program to Subtract Complex Number Using Operator Overloading */
#include<iostream>
using namespace std;

class ComplexNumber {
   private:
   int real, imag;
   public:
   ComplexNumber(int r = 0, int i =0) {
      real = r;
      imag = i;
   }
   ComplexNumber operator - (ComplexNumber const &obj1) {
      ComplexNumber obj2;
      obj2.real = real - obj1.real;
      obj2.imag = imag - obj1.imag;
      return obj2;
   }
   void print() {
      if(imag>=0)
      cout << real << " + ( " << imag <<" ) i"<<endl;
      else
      cout << real << " + ( " << imag <<" ) i"<<endl;
   }
};
int main() {
   ComplexNumber c1(26, -7), c2(2, 56);
   cout<<"The two complex numbers is : "<<endl;
   c1.print();
   c2.print();
   cout<<"The result of the subtraction is : ";
   ComplexNumber c3 = c1 - c2;
   c3.print();
}
