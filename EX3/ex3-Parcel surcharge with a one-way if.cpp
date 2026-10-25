// Ex3: parcel surcharge (one-way if)
//
// READ P_WeightKg
// SET fee = 8.00
// IF P_WeightKg\ > 2.0 THEN
//     SET fee = fee + 5.00
//     DISPLAY "Heavy parcel: RM5.00 surcharge added"
// ENDIF
// DISPLAY "Total fee: RM" fee

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double P_WeightKg;
	double fee = 8.00;

	cout << "Enter parcel weight (kg): ";
	cin >> P_WeightKg;

	if (P_WeightKg > 2.0) {
		fee = fee + 5.00;
		cout << "Heavy parcel: RM5.00 surcharge added" << endl;
	}

	cout << fixed << setprecision(2);
	cout << "Total fee: RM" << fee << endl;

	return 0;
}

/* TEST RESULTS (output)
   
	test 1 = Enter parcel weight (kg): 1.5
	output = Total fee: RM8.00
	
	test 2 = Enter parcel weight (kg): 2.0
	output = 

	test 3 = Enter parcel weight (kg): 2.1
	output =	Heavy parcel: RM5.00 surcharge added
				Total fee: RM13.00

	test 4 = Enter parcel weight (kg): 7.25
	output = Heavy parcel: RM5.00 surcharge added
			 Total fee: RM13.00
			 
*/