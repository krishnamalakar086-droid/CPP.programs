#include <iostream>
using namespace std;
int main(){
int day;
cout << "Enter day number (1-7):" << endl;
cin >> day;
switch (day){
case 1:
cout << "Sunday" ;
break;
case 2:
cout << "Monday";
case 3:
cout << "Tuesday";
break;
case 4:
cout << "Wednesday";
break;
case 5:
cout << "Thursday";
break;
case 6:
cout << "Friday";
break;
case 7:
cout << "Saturday";
break;
default:
cout << "Wrong choose";
break;
}
return 0;
}
    