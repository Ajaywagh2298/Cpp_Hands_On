/* 10.	C++ Program to Find All Roots of a Quadratic Equation */

#include<iostream>
#include<math.h>

using namespace std;
int main(){
    double a,b,c,dicri,r1,r2,realp,imagp;

    cout<<"Enter the Coefficient a , b and c :";
  cin>>a>>b>>c;

    dicri = b * b - 4 * a * c ;

    if (dicri == 0){
        r1 = r2 = -b / (2 * a);
        cout<<"Root 1 and Root 2 of equation is : "<<r1<<endl;
    }

    else if (dicri > 0){
        r1 = (-b + sqrt(dicri)) / (2 * a);
        r2 = (-b - sqrt(dicri)) / (2 * a);
        cout<<"Root 1 = "<<r1<<" and Root 2 = "<< r2<<" of equation."<<endl;
        }

    else{
        realp = -b / (2 * a);
        imagp = sqrt(-dicri) / (2 * a);
        cout<<"Root 1 = "<<realp+imagp<<" and Root 2 = "<<realp +imagp <<" of equation."<<endl;;

    }
 return 0;
}
