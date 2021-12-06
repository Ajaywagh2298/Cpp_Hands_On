/* 70.C++ Program to use private and protected access specifiers in inheritance */
#include <iostream>
#include<conio.h>
#include<cmath>
using namespace std;
class DemoParent{
    protected:
    int protectedA;
    int protectedB;

    private:
    int privateA;
    int privateB;

    void displayP(){

        cout<<"\n\n Private var A : "<<privateA;
        cout<<"\n Private var B : "<<privateB;
        cout<<"\n Addition : "<<privateA<<" + "<<privateB<<" = "<<privateA+privateB<<endl;
    }
    public:
    DemoParent(int privateA, int privateB){
        this->privateA = privateA;
        this->privateB = privateB;
        displayP();
    }
        DemoParent(){}
};
class DChild : public DemoParent
{
    public:
    int display()
    {
        cout<<"\n\n Protected var A = "<<protectedA;
        cout<<"\n Private var B = "<<protectedB;
        cout<<"\n Addition : "<<protectedA<<" + "<<protectedB<<" = "<<protectedA+protectedB<<endl;
    }
    DChild(int protectedA, int protectedB){
        this->protectedA = protectedA;
        this->protectedB = protectedB;
    }
    DChild(){}
};
int main(){
    int x,y;
    cout<<"Enter any 2 number : ";
    cin>>x>>y;
    DChild obj(x,y);

    obj.display();
    DemoParent privObj(x,y);

    cout<<endl<<endl;
    getch();
    return 0;
}
