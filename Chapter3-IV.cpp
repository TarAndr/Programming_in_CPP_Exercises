// Programming on C++
// Exercises
// Chapter 3, IV
// Operators, Cycles

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Exercise 1/20
table01() {
	cout << "\n\tResult:\n\n";
	for(int i = 0; i < 4; i++) {
		cout << "\t";
		for(int j = 0; j < 6; j++) {
			cout << "5 ";
		}
		cout << endl;
	}
}

// Exercise 2/20
table02() {
	cout << "\n\tResult:\n\n";
	for(int i = 0; i < 4; i++) {
		cout << "\t";
		for(int j = 1; j <= 10; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}

// Exercise 3/20
table03() {
	cout << "\n\tResult:\n\n";
	for(int i = 0; i < 5; i++) {
		cout << "\t";
		for(int j = -10; j <= 12; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}

// Exercise 4/20
table04() {
	cout << "\n\tResult:\n\n";
	for(int i = 41; i <= 71; i += 10) {
		cout << "\t";
		for(int j = 0; j < 10; j++) {
			cout << i + j << " ";
		}
		cout << endl;
	}
}

// Exercise 5/20
table05() {
	cout << "\n\tResult:\n\n";
	for(int i = 1; i <= 5; i++) {
		cout << "\t";
		for(int j = 0; j < i; j++) {
			cout << "5 ";
		}
		cout << endl;
	}
}

// Exercise 6/20
table06() {
	cout << "\n\tResult:\n\n";
	for(int i = 0; i < 5; i++) {
		cout << "\t";
		for(int j = 0; j < 5 - i; j++) {
			cout << "1 ";
		}
		cout << endl;
	}
}

// Exercise 7/20
table07() {
	cout << "\n\tResult:\n\n";
	for(int i = 1; i <= 5; i++) {
		cout << "\t";
		for(int j = 0; j < i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}
}

// Exercise 8/20
table08() {
	cout << "\n\tResult:\n\n";
	for(int i = 0; i < 5; i++) {
		cout << "\t";
		for(int j = 0; j < 5 - i; j++) {
			cout << i + 6 << "  ";
		}
		cout << endl;
	}
}

// Exercise 9/20
table09() {
	cout << "\n\tResult:\n\n";
	for(int i = 7; i >= 3; i--) {
		cout << "\t";
		for(int j = 0; j < 8 - i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}
}

// Exercise 10/20
table10() {
	cout << "\n\tResult:\n\n";
	for(int i = 8; i >= 4; i--) {
		cout << "\t";
		for(int j = 0; j < i - 3; j++) {
			cout << i << "  ";
		}
		cout << endl;
	}
}

// Exercise 11/20
table11() {
	cout << "\n\tResult:\n\n";
	for(int i = 0; i < 5; i++) {
		cout << "\t";
		for(int j = 1; j < i + 2; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}

// Exercise 12/20
table12() {
	cout << "\n\tResult:\n\n";
	for(int i = 1; i <= 5; i++) {
		cout << "\t";
		for(int j = i; j > 0; j--) {
			cout << j << " ";
		}
		cout << endl;
	}
}

// Exercise 13/20
table13() {
	cout << "\n\tResult:\n\n";
	for(int i = 0; i < 5; i++) {
		cout << "\t";
		for(int j = 0; j < 5 - i; j++) {
			cout << j << "  ";
		}
		cout << endl;
	}
}

// Exercise 14/20
table14() {
	cout << "\n\tResult:\n\n";
	for(int i = 4; i >= 0; i--) {
		cout << "\t";
		for(int j = i; j >= 0; j--) {
			cout << j << "  ";
		}
		cout << endl;
	}
}

// Exercise 15/20
table15() {
	cout << "\n\tResult:\n\n";
	for(int i = 1; i <= 5; i++) {
		cout << "\t";
		for(int j = 0; j < i; j++) {
			cout << i << "  ";
		}
		cout << "\n\t";
		for(int j = 0; j < i; j++) {
			cout << "0  ";
		}
		cout << endl;
	}
}

// Exercise 16/20
table16() {
	cout << "\n\tResult:\n\n";
	for(int i = 0, k = 8; i < 4; i++) {
		cout << "\t";
		for(int j = 0; j < i + 1; j++) {
			cout << k << "  ";
		}
		k--;
		cout << "\n\t";
		for(int j = 0; j < i + 1; j++) {
			cout << k << "  ";
		}
		cout << endl;
	}
}

// Exercise 17/20
table17() {
	cout << "\n\tResult:\n\n";
	for(int i = 1; i <= 4; i++) {
		cout << "\t";
		for(int j = 0; j < i; j++) {
			cout << i << "  ";
		}
		cout << "\n\t";
		for(int j = 0; j < i; j++) {
			cout << i + 5 << "  ";
		}
		cout << endl;
	}
}

// Exercise 18/20
table18() {
	cout << "\n\tResult:\n\n";
	for(int i = 1, k = 0; i <= 4; i++) {
		cout << "\t";
		for(int j = 0; j < i + k; j++) {
			cout << 10 - i << "  ";
		}
		k = i / 3;
		cout << "\n\t";
		for(int j = 0; j < i + k; j++) {
			cout << 5 - i << "  ";
		}
		cout << endl;
	}
}

// Exercise 19/20
table19() {
	cout << "\n\tResult:\n\n";
	for(int i = 1; i <= 5; i++) {
		cout << "\t";
		for(int j = 1; j <= i; j++) {
			cout << 2 + j / i << "  ";
		}
		cout << "\n\t";
		for(int j = 0; j < i; j++) {
			cout << (11 - i + j) % 10 << "  ";
		}
		cout << endl;
	}
}

// Exercise 20/20
table20() {
	cout << "\n\tResult:\n\n";
	for(int i = 1; i <= 5; i++) {
		cout << "\t";
		for(int j = 1; j <= 6 - i; j++) {
			cout << 2 << "  ";
		}
		cout << "\n\t";
		for(int j = 1, k = 3 - i; j <= 6 - i; j++) {
			cout << k + j << "  ";
		}
		cout << endl;
	}
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 3, IV\n" << endl;
	
	const int exNum = 20;
	int mode;
	
	do{
	
	
		cout << "\n\n\tPlease choise the number from 0 to " << exNum << endl;
		cout << "\n\t\t0 \t- Exit" << endl;
		
		for(int i = 1; i <= exNum; i++) {
			cout << "\t\t" << i << " \t- " << "Exercise " << i << endl;
		}

		cout << "\t";

		cin >> mode;
		
		switch(mode) {
			
			case 1: {
				// Exercise 1/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table01();
				
			break;
			}
			
			case 2: {
				// Exercise 2/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table02();
				
			break;
			}

			case 3: {
				// Exercise 3/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table03();
				
			break;
			}

			case 4: {
				// Exercise 4/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table04();
				
			break;
			}
			
			case 5: {
				// Exercise 5/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table05();
				
			break;
			}

			case 6: {
				// Exercise 6/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table06();
				
			break;
			}

			case 7: {
				// Exercise 7/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table07();
				
			break;
			}

			case 8: {
				// Exercise 8/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table08();
				
			break;
			}

			case 9: {
				// Exercise 9/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table09();
				
			break;
			}

			case 10: {
				// Exercise 10/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table10();
				
			break;
			}

			case 11: {
				// Exercise 11/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table11();
				
			break;
			}

			case 12: {
				// Exercise 12/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table12();
				
			break;
			}

			case 13: {
				// Exercise 13/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table13();
				
			break;
			}

			case 14: {
				// Exercise 14/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table14();
				
			break;
			}

			case 15: {
				// Exercise 15/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table15();
				
			break;
			}

			case 16: {
				// Exercise 16/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table16();
				
			break;
			}

			case 17: {
				// Exercise 17/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table17();
				
			break;
			}

			case 18: {
				// Exercise 18/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table18();
				
			break;
			}

			case 19: {
				// Exercise 19/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table19();
				
			break;
			}

			case 20: {
				// Exercise 20/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;

				table20();
				
			break;
			}
						
			default:
			cout << "\tFinished" << endl;
		}
	
		if(mode > 0 && mode < exNum + 1) {
			string pause;
			//------------------------END-------------------------
			cout << "\n\t-------------END------------- " << endl;
			do{
				cout << "\n\tPlease enter \"0\" for continue" << endl;
				cin >> pause;
			}
			while(pause != "0");
		}
	} while(mode);
	
	return 0;
}