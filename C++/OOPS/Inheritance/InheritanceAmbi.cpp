#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A show()" << endl;
    }
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};

int main() {
    D obj;

    obj.B::show();   // calls A::show() via B
    obj.C::show();   // calls A::show() via C

    return 0;
}
