// Ex2: battery saver conditions
// Order of the five values: C1, C2, C3, C4, C5 
// Input (level, charge)     Predicted    Real output
// 15, 0                     1,1,0,1,1    1,1,0,1,1
// 15, 1                     1,0,1,1,1    1,0,1,1,1
// 100, 0                    0,0,1,1,1    0,0,1,1,1
// 150, 0                    0,0,0,0,1    0,0,0,0,1
// -5, 1                     1,0,1,0,1    1,0,1,0,1

#include <iostream>
using namespace std;

int main() {
	int level;
	int charge;
	cout << "Enter battery level (0-100): ";
	cin >> level;
	cout << "Enter charging status (1 = yes, 0 = no): ";
	cin >> charge;

	cout << "C1)" << (level < 20) << endl;
	cout << "C2)" << (level < 20 && !charge) << endl;
	cout << "C3)" << (level == 100 || charge) << endl;
	cout << "C4)" << (level >= 0 && level <= 100) << endl;
	cout << "C5)" << (0 <= level <= 100) << endl;

	return 0;
}