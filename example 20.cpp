/* 20.Increment ++ and Decrement -- Operator Overloading in C++ Programming
 */

#include<iostream>
using namespace std;

class Operator
{
	public :
		int i,j;
		Operator operator ++(int)
		{
			i++;
		}
		Operator operator --()
		{
			j--;
		}
};

int main(){
   Operator obj1;
	cout<<"values before incrementing i and decrimenting j:\n i="<<obj1.i<<" j="<<obj1.j;
	obj1++;
	--obj1;
	cout<<"\nvalues After incrementing i and decrimenting j :\n i="<<obj1.i<<" j="<<obj1.j;

	return 0;
}
