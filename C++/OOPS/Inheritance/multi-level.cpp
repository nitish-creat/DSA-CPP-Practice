#include <iostream>
using namespace std;

class Person {
public:
    string name;
public:
    void setName(string n) {
        name = n;
    }
};

class Student : public Person {
protected:
    int rollNo;
public:
    void setRoll(int r) {
        rollNo = r;
    }
};

class Result : public Student {
public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Result r;
    // r.setName("Nitish");
    r.name="Nitish rana";
    r.setRoll(101);
    r.display();
    return 0;
}
