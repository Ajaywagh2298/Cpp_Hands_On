/* 48.C++ Program to Find Transpose of a Matrix */

#include<iostream>

using namespace std;
int main()
{
	int mult[3][3],i,j;
	int mat1[3][3],mat2[3][3];
	cout<<"Enter the first matrix data"<<endl;

	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>mat1[i][j];
            cout<<"\n";
        }
	}

	cout<<"1st Matrix: \n"<<endl;
	for(i=0;i<3;i++)
	{

		for(j=0;j<3;j++)
		{
			cout<<mat1[i][j]<<"\t";
		}
		cout<<endl;

	}

	cout<<"\n \n";

	for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mat2[i][j] = mat1[j][i];
        }
    }
    cout<<"Transposed matrix is : "<<endl;
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            cout<<mat2[i][j]<<"\t";
        }
        cout<<endl;
    }
}
