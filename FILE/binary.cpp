// student card management system
// CRUD 
// creat a system to store student detials roll no , name, marks in three sub, cal total and percentage save and load by using binary files
// operations add student display all, search by roll no update student and delete 

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Student {
public:
    int roll;
    char name[50];
    int marks[3];
    int total;
    float percent;

    void calculate() {
        total = marks[0] + marks[1] + marks[2];
        percent = total / 3.0f;
    }

    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cin.ignore();

        cout << "Enter Name: ";
        cin.getline(name, 50);

        cout << "Enter marks in 3 subjects: ";
        for (int i = 0; i < 3; i++) cin >> marks[i];

        calculate();
    }

    void display() {
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks[0] << " " << marks[1] << " " << marks[2];
        cout << "\nTotal: " << total;
        cout << "\nPercentage: " << percent << "%\n";
    }
};

// ---------------- CRUD OPERATIONS ---------------- //

void addStudent() {
    Student s;
    s.input();

    ofstream fout("student.dat", ios::binary | ios::app);
    fout.write((char *)&s, sizeof(s));
    fout.close();

    cout << "\nStudent Added Successfully.\n";
}

void displayAll() {
    Student s;
    ifstream fin("student.dat", ios::binary);

    if (!fin) {
        cout << "\nNo data found.\n";
        return;
    }

    while (fin.read((char *)&s, sizeof(s))) {
        s.display();
        cout << "-----------------------------\n";
    }

    fin.close();
}

void searchStudent() {
    int roll;
    cout << "Enter roll to search: ";
    cin >> roll;

    Student s;
    ifstream fin("student.dat", ios::binary);
    bool found = false;

    while (fin.read((char *)&s, sizeof(s))) {
        if (s.roll == roll) {
            cout << "\nRecord Found:\n";
            s.display();
            found = true;
            break;
        }
    }

    if (!found) cout << "\nRecord not found.\n";

    fin.close();
}

void updateStudent() {
    int roll;
    cout << "Enter roll to update: ";
    cin >> roll;

    Student s;
    fstream file("student.dat", ios::binary | ios::in | ios::out);
    bool found = false;

    while (file.read((char *)&s, sizeof(s))) {
        if (s.roll == roll) {
            cout << "\nExisting Data:\n";
            s.display();

            cout << "\nEnter New Data:\n";
            s.input();

            int pos = (-1) * sizeof(s);
            file.seekp(pos, ios::cur);
            file.write((char *)&s, sizeof(s));

            cout << "\nRecord Updated.\n";
            found = true;
            break;
        }
    }

    if (!found) cout << "\nRecord not found.\n";

    file.close();
}

void deleteStudent() {
    int roll;
    cout << "Enter roll to delete: ";
    cin >> roll;

    Student s;
    ifstream fin("student.dat", ios::binary);
    ofstream fout("temp.dat", ios::binary);

    bool found = false;

    while (fin.read((char *)&s, sizeof(s))) {
        if (s.roll == roll) {
            found = true;
            continue;  // skip writing → delete
        }
        fout.write((char *)&s, sizeof(s));
    }

    fin.close();
    fout.close();

    remove("student.dat");
    rename("temp.dat", "student.dat");

    if (found)
        cout << "\nRecord Deleted.\n";
    else
        cout << "\nRecord not found.\n";
}

// ---------------- MAIN MENU ---------------- //

int main() {
    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice.\n";
        }
    } while (choice != 6);

    return 0;
}
