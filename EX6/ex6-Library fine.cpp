// Ex6: library fine debugged
//
// RULES: RM0.50 fine per day late.
//        0 days: print "Returned on time. No fine."
//        14 days or more: print both suspension lines.

#include <iostream>
#include <iomanip>   // BUG 5: was missing, needed for setprecision
using namespace std;

int main() {
	int daysLate;
	double fine = 0.0;   // BUG 6: fine was not initialised (now starts at 0.0)

	cout << "Days late: ";
	cin >> daysLate;
	if (daysLate > 0)                // BUG 1: The stray ; ends the if, so it controls nothing and the fine line runs every time
		fine = daysLate * 0.50;

	if (daysLate == 0)              // BUG 2: = assigns 0 to daysLate instead of comparing. The on-time message never prints
		cout << "Returned on time. No fine." << endl;

	if (daysLate >= 14) {           // BUG 3: Misses exactly 14, but the rule says 14 days or more (replace > to >=)
		cout << "Membership suspended." << endl;
		cout << "Contact the library counter." << endl;
	}                               // BUG 4: Contact the library counter. prints for every customer, because the if only controls the first line(No braces around the two suspension lines)

	
	cout << fixed << setprecision(2); // BUG 5: Money shows as RM0.5 and RM7 instead of 2 decimal places(add fixed << setprecision(2) and #include <iomanip> )
	cout << "Fine: RM" << fine << endl;

	return 0;
}

/* TEST RESULTS (output)

	test 1 = Days late: 0
	output = Returned on time. No fine.
			 Fine: RM0.00

	test 2 = Days late: 1
	output = Fine: RM0.50

	test 3 = Days late: 13
	output = Fine: RM6.50

	test 4 = Days late: 14
	output = Membership suspended.
			 Contact the library counter.
			 Fine: RM7.00

	test 5 = Days late: 15
	output = Membership suspended.
			 Contact the library counter.
			 Fine: RM7.50

*/