#include<iostream>
using namespace std;
class Buisness{
string buisness;
int employees;
int meterials;
string makingitems;
int sellers;
int castomars;
public:
void domaking(){
cout<<"makers are making"<<endl;
}
void selling(){
cout << "sellers are selling" << endl;
}
void buying(){
cout << "customers are buying" << endl;
}
};
int main(){
Buisness edu;
edu.domaking();
edu.selling();
edu.buying();
return 0;
}