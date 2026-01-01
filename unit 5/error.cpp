#include <iostream>
#include <stdexcept>
#include <exception>
#include <vector>
#include <string>
#include <new>
#include <typeinfo>

using namespace std;

class Base {
    virtual void f() {}
};

class Derived : public Base {};

int main() {

    // 1. std::exception
    try {
        throw exception();
    }
    catch (exception &e) {
        cout << "std::exception caught" << endl;
    }

    // 2. invalid_argument
    try {
        throw invalid_argument("Invalid argument");
    }
    catch (invalid_argument &e) {
        cout << e.what() << endl;
    }

    // 3. out_of_range
    try {
        vector<int> v = {1, 2, 3};
        cout << v.at(10);
    }
    catch (out_of_range &e) {
        cout << e.what() << endl;
    }

    // 4. length_error
    try {
        string s;
        s.resize(s.max_size() + 1);
    }
    catch (length_error &e) {
        cout << e.what() << endl;
    }

    // 5. domain_error
    try {
        throw domain_error("Domain error");
    }
    catch (domain_error &e) {
        cout << e.what() << endl;
    }

    // 6. runtime_error  ✅ FIXED
    try {
        throw runtime_error("Runtime error");
    }
    catch (runtime_error &e) {
        cout << e.what() << endl;
    }

    // 7. overflow_error
    try {
        throw overflow_error("Overflow error");
    }
    catch (overflow_error &e) {
        cout << e.what() << endl;
    }

    // 8. underflow_error
    try {
        throw underflow_error("Underflow error");
    }
    catch (underflow_error &e) {
        cout << e.what() << endl;
    }

    // 9. bad_alloc
    try {
        int* p = new int[9999999]; // Intentionally large allocation
    }
    catch (bad_alloc &e) {
        cout << e.what() << endl;
    }

    // 10. typeid example
    try {
        Base* b = new Derived();
        cout << typeid(*b).name() << endl;
        delete b;
    }
    catch (bad_typeid &e) {
        cout << e.what() << endl;
    }

    return 0;
}
