// Ex5: Hostel gate: turn this flowchart into code
//
//pseudocode
// BEGIN                                            - Start
// READ hour                                        - Read hour (0-23)
// IF hour >= 23 OR hour < 6 THEN                   
//							                   - Decision (Yes branch)
//     DISPLAY "Late entry: sign the log book"      - Display
//     DISPLAY "Show your matric card"              - Display
// ELSE                                             
//                                              - Decision (No branch)
//     DISPLAY "Welcome back"                       - Display
// ENDIF
// DISPLAY "Good night"                             - Display (both branches join here)
// END                                              - Stop

#include <iostream>
using namespace std;

int main() {
	int hour;                                                    // Start

	cout << "Enter hour (0-23): ";
	cin >> hour;                                                 // Read hour

	if (hour >= 23 || hour < 6) {                                // Decision: Yes
		cout << "Late entry: sign the log book" << endl;         // Display
		cout << "Show your matric card" << endl;                 // Display
	}
	else {                                                       // Decision: No
		cout << "Welcome back" << endl;                          // Display
	}

	cout << "Good night" << endl;                                // Display

	return 0;                                                    // Stop
}

/* TEST RESULTS (output)

	test 1 = Enter hour (0-23): 22
	output = Welcome back
			 Good night

	test 2 = Enter hour (0-23): 23
	output = Late entry: sign the log book
			 Show your matric card
			 Good night

	test 3 = Enter hour (0-23): 0
	output = Late entry: sign the log book
			 Show your matric card
			 Good night
	
	test 4 = Enter hour (0-23): 5
	output = Late entry: sign the log book
			 Show your matric card
			 Good night
	
	test 5 = Enter hour (0-23): 6
	output = Welcome back
			 Good night
	
*/