/*
WRAPING UP A DATA MEMBERS AND FUNCTION
BASICALLY INFORMATION AND DATA HIDING

WHY WE USE IT: 
    DATA HIDING;
    CODE REUSEABILITY
    UNIT TESTING

ALL DATA MEMBERS SHOULD BE PRIVATE FOR FULLY ENCAPSULATED CLASS

*/

#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    int rollNo;
    string name;
    public:
    void setRollNo(int n){
        this->rollNo =n;
    }
    void setName(string n){
        this->name =n;
    }
    int getRollNo(){
    return rollNo;
    }
    string getName(){
        return name;
    }

};      



int main() {
    Student s1;
    s1.setName("Ram");
    s1.setRollNo(19);
    cout<<"Name of the student: "<<s1.getName();
    cout<<"RollNo of the student: "<<s1.getRollNo();
    return 0;
}