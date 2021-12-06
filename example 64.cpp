/* 64.C++ Program to use public access specifier in inheritance */
#include <iostream>
using namespace std;
class CBase {
        private:
        int pvt = 19;

        protected:
        int prot = 25;

        public:
        int pub = 33;

        int getPVT() {
        return pvt;
    }
};

class PDerived : public CBase {
        public:
        int getProt() {
                return prot;
        }
    };

int main() {
        PDerived obj1;
        cout << "Private : " << obj1.getPVT() << endl;
        cout << "Protected : " << obj1.getProt() << endl;
        cout << "Public : " << obj1.pub << endl;
        return 0;
}
