#include <iostream>
using namespace std;
class PMS{
private:
string playersname;
string ID;
string DOB;
int age;
string bloodgroup;
string BP;
string gender;
public:
void setdetails (){
cout << "create your account" << endl;
cout << "enter your name" << endl;
cin >> playersname;
cout << "enter your ID" << endl;
cin >> ID;
cout << "your DOB is" << endl;
cin >> DOB;
cout << "enter your age" << endl;
cin >> age;
cout << "enter your bloodgroup" << endl;
cin >> bloodgroup;
cout << "enter your BP" << endl;
cin >> BP;
cout << "enter your gender" << endl;
cin >> gender;
cout << "your account is successfully" << endl;
}
void getdetails(){
cout << " hey there " <<playersname<< endl;
cout << "your ID is " <<ID<< endl;
cout << "your DOB is " << DOB<< endl;
cout << "your age is " << age<< endl;
cout << "your blood group is " << bloodgroup<< endl;
cout << "your BP is " << BP<< endl;
cout << "your gender is " << gender<< endl;
}
};
int main(){
PMS player1;
player1.setdetails();
player1.getdetails();
return 0;
}