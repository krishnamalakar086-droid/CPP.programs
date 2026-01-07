#include <iostream>
using namespace std;
class car {
public:
string Brand;
string Color;
int Wheel;
string Engine;
int Gear;
string interior_design;
void Drive() {
cout << "car is running now" << endl;
}
void stop() {
cout << "Car stopped" << endl;
}
void displayDetails() {
cout << "Car Details"<< endl;
cout << "Brand"<< Brand << endl;
cout << "Color"<< Color << endl;
cout << "Wheels"<< Wheel << endl;
cout << "Engine" << Engine << endl;
cout << "Gear"<< Gear << endl;
cout << "Interior Design " << interior_design << endl;
}
};
int main() {
car Thars;
Thars.Brand = "Mahendra";
Thars.Color = "Bottle green";
Thars.Wheel = 4;
Thars.Engine = "2184cc";
Thars.Gear = 6;
Thars.interior_design = "Basic";
Thars.displayDetails();
Thars.Drive();
Thars.stop();
return 0;
}