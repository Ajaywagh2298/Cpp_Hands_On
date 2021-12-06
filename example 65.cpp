/* 65.C++ Program to use private access specifier in inheritance */
#include <iostream>
using namespace std;
class Base {
    private:
    int pvt = 12;

    protected:
    int prot = 23;

    public:
    int pub = 34;

    int getPVT() {
    return pvt;
    }
};
class PriDerived : private Base {
    public:
    int getProt() {
    return prot;
    }
    int getPub() {
    return pub;
    }
};
int main() {
    PriDerived obj1;
    cout << "Private cannot be accessed direct. " << endl;
    cout << "Protected : " << obj1.getProt() << endl;
    cout << "Public : " << obj1.getPub() << endl;
    return 0;
}
