/* 68.C++ Program to use friend function */
#include <iostream>
using namespace std;
class Dist {
    private:
    int meter;
    friend int add(Dist);

    public:
        Dist() : meter(0) {}
};

int add(Dist d) {
    d.meter += 456;
    return d.meter;
}

int main() {
    Dist D;
    cout << "Distance: " << add(D);
    return 0;
}
