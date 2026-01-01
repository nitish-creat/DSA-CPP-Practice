#include <iostream>
using namespace std;

class Academic {
protected:
    int marks;
public:
    void setMarks(int m) {
        marks = m;
    }
};

class Sports {
protected:
    int score;
public:
    void setScore(int s) {
        score = s;
    }
};

class Result : public Academic, public Sports {
public:
    void display() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total: " << marks + score << endl;
    }
};

int main() {
    Result r;
    r.setMarks(80);
    r.setScore(15);
    r.display();
    return 0;
}
