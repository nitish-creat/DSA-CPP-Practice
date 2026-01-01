#include <iostream>
using namespace std;

class Product {
    string name;
    double price;
    int qty;
    double total;
public:
    void input(string n, double p, int q) {
        name = n;
        price = p;
        qty = q;
        total = price * qty;
    }
    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Total Price: " << total << endl;
    }
};

int main() {
    Product p1, p2, p3;
    string name1, name2, name3;
    double price1, price2, price3;
    int qty1, qty2, qty3;

    cin >> name1 >> price1 >> qty1;
    cin >> name2 >> price2 >> qty2;
    cin >> name3 >> price3 >> qty3;

    p1.input(name1, price1, qty1);
    p2.input(name2, price2, qty2);
    p3.input(name3, price3, qty3);

    cout << "Shopping Cart details:" << endl;
    p1.display();
    p2.display();
    p3.display();

    return 0;
}


// ✅ Example Input
// Apple 0.99 5
// Orange 1.50 3
// Banana 0.50 10

// ✅ Expected Output
// Shopping Cart details:
// Product Name: Apple
// Total Price: 4.95
// Product Name: Orange
// Total Price: 4.5
// Product Name: Banana
// Total Price: 5


#include <iostream>
using namespace std;

class NumberComparator {
    int n1, n2;
public:
    void setNumbers(int a, int b) {
        this->n1 = a;
        this->n2 = b;
    }

    void findMax() {
        int *ptr1 = &(this->n1);
        int *ptr2 = &(this->n2);

        if (*ptr1 > *ptr2)
            cout << *ptr1 << " is the maximum number";
        else
            cout << *ptr2 << " is the maximum number";
    }
};

int main() {
    NumberComparator obj;
    int a, b;
    cin >> a >> b;
    obj.setNumbers(a, b);
    obj.findMax();
    return 0;
}


// ✅ Sample Input 1
// 20 25

// ✅ Output
// 25 is the maximum number

// ✅ Sample Input 2
// -21 -58

// ✅ Output
// -21 is the maximum number


#include <iostream>
using namespace std;

class Complex {
    double real;
    double imag;
public:
    void setValues(double r, double i) {
        real = r;
        imag = i;
    }

    void display(string text) {
        cout << text << endl;
        cout << "real part: " << real << endl;
        cout << "imaginary part: " << imag << endl;
    }
};

int main() {
    Complex obj1, obj2;
    Complex *ptr1 = &obj1;
    Complex *ptr2 = &obj2;

    double real1, imag1, real2, imag2;
    cin >> real1 >> imag1;
    cin >> real2 >> imag2;

    ptr1->setValues(real1, imag1);
    ptr2->setValues(real2, imag2);

    ptr1->display("First complex number:");
    ptr2->display("Second complex number:");

    return 0;
}


// ✅ Sample Input 1
// 1.55 9.2
// 2.43 4.3

// ✅ Output
// First complex number:
// real part: 1.55
// imaginary part: 9.2
// Second complex number:
// real part: 2.43
// imaginary part: 4.3



#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    void setDate(int d, int m, int y) {
        this->day = d;
        this->month = m;
        this->year = y;
    }

    void printDate() {
        cout << "The date is: " << day << "/" << month << "/" << year;
    }
};

int main() {
    Date obj;
    Date* dptr = &obj;

    int d, m, y;
    cin >> d >> m >> y;

    dptr->setDate(d, m, y);
    dptr->printDate();

    return 0;
}


// ✅ Sample Input 1
// 13 10 2020

// ✅ Output
// The date is: 13/10/2020

// ✅ Sample Input 2
// 21 5 1998

// ✅ Output
// The date is: 21/5/1998