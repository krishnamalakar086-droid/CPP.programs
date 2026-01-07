#include <iostream>
using namespace std;
class SMS{
private:
string studentname;
string studentID;
int rollno;
string DOB;
int age;
int classname;
string address;
string perentsname;
long long int phno;
string gender;
public:
void setdetails(){
cout << "create student account" << endl;
cout << "enter your studentID" << endl;
cin >> studentID;
cout << "enter your studentname" << endl;
cin >> studentname;
cout << "enter your rollno" << endl;
cin >> rollno;
cout << "enter your DOB" << endl;
cin >> DOB;
cout << "enter your age" << endl;
cin >> age;
cout << "enter your classname" << endl;
cin >> classname;
cout<< "enter your address" <<endl;
cin>>address ;
cout << "enter your perentsname" << endl;
cin >> perentsname;
cout << "enter your phno" << endl;
cin >> phno;
cout << "enter your gender" << endl;
cin >> gender;
cout << "your account is successfuly create" << endl;
}
void getdetails(){
cout << "hey there" <<studentname<< endl;
cout << "your studentID is" <<studentID<< endl;
cout << "your rollno is"<<rollno << endl;
cout << "your DOB is" <<DOB<< endl;
cout << "your age is" <<age<< endl;
cout << "your classname is" <<classname<< endl;
cout << "your address is" <<address<< endl;
cout << "your perentsname is" <<perentsname<< endl;
cout << "your phno is" <<phno<< endl;
cout << "your gender is" <<gender<< endl;
}
};
int main(){
SMS student;
student.setdetails();
student.getdetails();
return 0;
}
    