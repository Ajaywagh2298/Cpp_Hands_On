/* 66.C++ Program to use protected access specifier in inheritance */
#include <iostream>
using namespace std;
class Base {
    private:
    int pvt = 11;

    protected:
    int prot = 22;

    public:
    int pub = 33;

    int getPVT() {
    return pvt;
    }
};

class ProDerived : protected Base {
    public:
    int getProt() {
        return prot;
    }
    int getPub() {
        return pub;
    }
};

int main() {
    ProDerived obj1;
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << obj1.getProt() << endl;
    cout << "Public = " << obj1.getPub() << endl;
    return 0;
}
