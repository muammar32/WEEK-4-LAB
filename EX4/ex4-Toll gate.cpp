// Ex4: Toll gate: open the gate or ask for a reload
//
// READ C_Balance
// READ toll_amount
// IF C_Balance >= toll_amount THEN
//     SET C_Balance = C_Balance - toll_amount
//     DISPLAY "Gate open"
//     DISPLAY "New balance: RM" C_Balance
// ELSE
//     SET shortfall = toll_amount - C_Balance
//     DISPLAY "Insufficient balance. Please reload."
//     DISPLAY "Shortfall: RM" shortfall
// ENDIF

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double C_Balance;
	double toll_amount;
	double shortfall;

	cout << "Enter card Balance (RM): ";
	cin >> C_Balance;
	cout << "Enter toll amount (RM): ";
	cin >> toll_amount;

	cout << fixed << setprecision(2);

	if (C_Balance >= toll_amount) {
		C_Balance = C_Balance - toll_amount;
		cout << "Gate open" << endl;
		cout << "New Balance: RM" << C_Balance << endl;
	}
	else {
		shortfall = toll_amount - C_Balance;
		cout << "Insufficient balance. Please reload." << endl;
		cout << "Shortfall: RM" << shortfall << endl;
	}

	return 0;
}

/* TEST RESULTS (output)
   
	test 1 = Enter card Balance (RM): 10.00
			 Enter toll amount (RM): 5.30
	output = Gate open
			 New Balance: RM4.70
	
	test 2 = Enter card Balance (RM): 5.30
			 Enter toll amount (RM): 5.30
	output = Gate open
			 New Balance: RM0.00

	test 3 = Enter card Balance (RM): 5.29
			 Enter toll amount (RM): 5.30
	output = Gate shut
			 Insufficient balance. Please reload.  
			 Shortfall: RM0.01

	test 4 = Enter card Balance (RM): 0.00
			 Enter toll amount (RM): 2.10
	output = Gate shut
			 Insufficient balance. Please reload.  
			 Shortfall: RM2.10
			 
*/