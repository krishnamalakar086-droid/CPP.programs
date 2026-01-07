#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    int rollNo;
    int marks;
    int className;

public:

    void setDetails(string name, int roll, int mark, int cls) {
        studentName = name;
        rollNo = roll;
        marks = mark;
        className = cls;
    } 
    
               
    string getName() {
        return studentName;
    }

    
    int getRollNo() {
        return rollNo;
    }

    int getMarks() {
        return marks;
    }

    
    int getClassName() {
        return className;
    }
};

int main() {
    Student student1;
    student1.setDetails("Krishna", 1, 85, 10);

    cout << "Student Name: " << student1.getName() << endl;
    cout << "Roll Number: " << student1.getRollNo() << endl;
    cout << "Marks: " << student1.getMarks() << endl;
    cout << "Class: " << student1.getClassName() << endl;

    return 0;
}