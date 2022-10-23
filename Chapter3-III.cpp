// Programming on C++
// Exercises
// Chapter 3, III
// Operators, Cycles

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Exercise 1/20
order01() {
	for(int i = 1; i < 22; i += 2) {
		cout << i << " ";
	}
}

// Exercise 2/20
order02() {
	cout << endl;
	for(int i = 60; i > 9; i -= 2) {
		cout << "\t" << i << endl;
	}
}

// Exercise 3/20
order03() {
	cout << endl;
	for(int i = 10; i < 26; i++) {
		cout << "\t" << i << " " << i + 0.4 << endl;
	}
}

// Exercise 4/20
order04() {
	cout << endl;
	for(int i = 25; i < 36; i++) {
		cout << "\t" << i << " " << i + 0.5 << " " << i - 0.2 << endl;
	}
}

// Exercise 5/20
order05() {
	cout << endl;
	cout << "\tPound (lb.)\tKilogram (kg)" << endl;
	for(int i = 1; i <= 10; i++) {
		cout << "\t\t" << i << "\t\t" << i * 0.453 << endl;
	}
}

// Exercise 6/20
order06() {
	cout << endl;
	cout << "\tEnter the dollar to ruble exchange rate:" << endl;
	cout << "\t";
	double r;
	cin >> r;
	cout << "\n\tResult:\t";
	cout << "\n\tUSD:\tRub:" << endl;
	for(int i = 5; i <= 120; i += 5) {
		cout << "\t" << i << "\t" << i * r << endl;
	}
}

// Exercise 7/20
order07() {
	cout << endl;
	cout << "\tEnter the cost of one unit of goods:" << endl;
	cout << "\t";
	double cost;
	cin >> cost;
	cout << "\n\tResult:\t";
	cout << "\n\tUnits:\tCost:" << endl;
	for(int i = 10; i <= 100; i += 10) {
		cout << "\t" << i << "\t" << i * cost << endl;
	}
}

// Exercise 8/20
order08() {
	cout << endl;
	cout << "\tInchs:\tCentimeters:" << endl;
	for(int i = 2; i <= 12; i += 2) {
		cout << "\t" << i << "\t" << i * 2.54 << endl;
	}
}

// Exercise 9/20
order09() {
	cout << endl;
	cout << "\tEnter the beginning of the range:" << endl;
	cout << "\t";
	int A;
	cin >> A;
	cout << "\tEnter the end of the range:" << endl;
	cout << "\t";
	int B;
	cin >> B;
	cout << "\n\tResult:\t";
	cout << "\n\tNumber:\tCube:" << endl;
	for(int i = ((A > B) ? A : B); i >= ((A < B) ? A : B); i--) {
		cout << "\t" << i << "\t" << i * i * i << endl;
	}
}

// Exercise 10/20
order10() {
	cout << endl;
	cout << "\tEnter the beginning of the range:" << endl;
	cout << "\t";
	int A;
	cin >> A;
	cout << "\tEnter the end of the range:" << endl;
	cout << "\t";
	int B;
	cin >> B;
	cout << "\tEnter the digit:" << endl;
	cout << "\t";
	int X;
	cin >> X;
	X = abs(X);
	cout << "\n\tResult:\n";
	for(int i = ((A < B) ? A : B); i <= ((A > B) ? A : B); i++) {
		if(abs(i % 10) != X) continue;
		cout << "\t" << i << endl;
	}
}

// Exercise 11/20
order11() {
	cout << endl;
	cout << "\tEnter the beginning of the range:" << endl;
	cout << "\t";
	int A;
	cin >> A;
	cout << "\tEnter the end of the range:" << endl;
	cout << "\t";
	int B;
	cin >> B;
	cout << "\tEnter the digit \"X\":" << endl;
	cout << "\t";
	int X;
	cin >> X;
	X = abs(X);
	cout << "\tEnter the digit \"Y\":" << endl;
	cout << "\t";
	int Y;
	cin >> Y;
	Y = abs(Y);
	cout << "\n\tResult:\n";
	for(int i = ((A < B) ? A : B); i <= ((A > B) ? A : B); i++) {
		if(abs(i % 10) != X && abs(i % 10) != Y) continue;
		cout << "\t" << i << endl;
	}
}

// Exercise 12/20
order12() {
	cout << endl;
	cout << "\tEnter the beginning of the range:" << endl;
	cout << "\t";
	int A;
	cin >> A;
	cout << "\tEnter the end of the range:" << endl;
	cout << "\t";
	int B;
	cin >> B;
	int i = ((A < B) ? A : B);
	i = i + abs(i % 2);
	cout << "\n\tResult:" << endl;
	for(i; i <= ((A > B) ? A : B); i += 2) {
		cout << "\t" << i << endl;
	}
}

// Exercise 13/20
order13() {
	cout << endl;
	cout << "\tEnter the beginning of the range:" << endl;
	cout << "\t";
	int A;
	cin >> A;
	cout << "\tEnter the end of the range:" << endl;
	cout << "\t";
	int B;
	cin >> B;
	int i = ((A < B) ? A : B);
	i = ((i > 0) ? i : 1);
	cout << "\n\tResult:" << endl;
	for(i; i <= ((A > B) ? A : B); i++) {
		cout << "\t" << i << endl;
	}
}

// Exercise 14/20
order14() {
	cout << endl;
	cout << "\tEnter the beginning of the range:" << endl;
	cout << "\t";
	int A;
	cin >> A;
	cout << "\tEnter the end of the range:" << endl;
	cout << "\t";
	int B;
	cin >> B;
	int i = ((A < B) ? A : B);
	i += ((i % 3) ? ((i > 0) ? 3 - i % 3 : abs(i % 3)) : 0);
	cout << "\n\tResult:" << endl;
	for(i; i <= ((A > B) ? A : B); i += 3) {
		cout << "\t" << i << endl;
	}
}

// Exercise 15/20
order15() {
	cout << endl;
	cout << "\tEnter the beginning of the range:" << endl;
	cout << "\t";
	int A;
	cin >> A;
	cout << "\tEnter the end of the range:" << endl;
	cout << "\t";
	int B;
	cin >> B;
	int i = ((A < B) ? A : B);
	i += ((i % 3) ? ((i > 0) ? 3 - i % 3 : abs(i % 3)) : 0);
	cout << "\n\tResult:" << endl;
	for(i; i <= ((A > B) ? A : B); i += 3) {
		if(i % 2) continue;
		cout << "\t" << i << endl;
	}
}

// Exercise 16/20
order16() {
	cout << endl;
	cout << "\tEnter the beginning of the range:" << endl;
	cout << "\t";
	int A;
	cin >> A;
	cout << "\tEnter the end of the range:" << endl;
	cout << "\t";
	int B;
	cin >> B;
	int i = ((A < B) ? A : B);
	i = i + abs(i % 2);
	cout << "\n\tResult:" << endl;
	for(i; i < 0; i += 2) {
		cout << "\t" << i << endl;
	}
}

// Exercise 17/20
order17() {
	cout << endl;
	cout << "\n\tResult:" << endl;
	for(int i = 10; i < 99; i++) {
		if(!(i % 11)) continue;
		cout << "\t" << i << endl;
	}
}

// Exercise 18/20
order18() {
	cout << endl;
	cout << "\n\tResult:" << endl;
	for(int i = 12; i < 101; i += 11) {
		cout << "\t" << i - 2 << endl;
		if(i > 99) break;
		cout << "\t" << i << endl;
	}
}

// Exercise 19/20
order19() {
	cout << endl;
	cout << "\n\tResult:" << endl;
	for(int i = 101; i < 1000; i++) {
		for(int j = 0; j < 10; j++, i += 10) {
			cout << "\t" << i << endl;
		}
	}
}

// Exercise 20/20
order20() {
	cout << endl;
	cout << "\n\tResult:" << endl;
	for(int i = 100; i < 1000; i++) {
		if((i / 100 == i % 10) || (i / 100 == (i / 10) % 10) || ((i / 10) % 10 == i % 10)) {
			cout << "\t" << i << endl;
		}
	}
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 3, III\n" << endl;
	
	const int exNum = 20;
	int mode;
	string exercise[exNum];
	exercise[0] = "Odd numbers from 1 to 21";
	exercise[1] = "Even numbers from 60 to 10";
	exercise[2] = "Numbers from 10 to 25";
	exercise[3] = "Numbers from 25 to 35";
	exercise[4] = "Pounds to kilograms conversion table";
	exercise[5] = "Dollar to ruble conversion";
	exercise[6] = "Calculation of the cost of goods";
	exercise[7] = "Distance conversion table from inches to centimeters";
	exercise[8] = "Cubes of integers in range";
	exercise[9] = "Numbers from the range ending in a digit";
	exercise[10] = "Numbers from the range ending in a digit X or Y";
	exercise[11] = "Even numbers in range";
	exercise[12] = "Positive numbers in range";
	exercise[13] = "Integers from the range that are multiples of three";
	exercise[14] = "Even integers from the range that are multiples of three";
	exercise[15] = "Negative even numbers in range";
	exercise[16] = "Two-digit numbers in which all numbers are different";
	exercise[17] = "Two-digit numbers in which the highest digit differs from the lowest by no more than one";
	exercise[18] = "Three-digit numbers that start and end with the same digit";
	exercise[19] = "Three-digit numbers with at least 2 digits repeated";
	
	do{
	
	
		cout << "\n\n\tPlease choise the number from 0 to " << exNum << endl;
		cout << "\n\t\t0 \t- Exit" << endl;
		
		for(int i = 0; i < exNum; i++) {
			cout << "\t\t" << i + 1 << " \t- " << exercise[i] << endl;
		}

		cout << "\t";

		cin >> mode;
		
		switch(mode) {
			
			case 1: {
				// Exercise 1/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				cout << "\n\tResult:\t";
				order01();
				
			break;
			}
			
			case 2: {
				// Exercise 2/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				cout << "\n\tResult:\t";
				order02();
				
			break;
			}

			case 3: {
				// Exercise 3/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				cout << "\n\tResult:\t";
				order03();
				
			break;
			}

			case 4: {
				// Exercise 4/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				cout << "\n\tResult:\t";
				order04();
				
			break;
			}
			
			case 5: {
				// Exercise 5/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				cout << "\n\tResult:\t";
				order05();
				
			break;
			}

			case 6: {
				// Exercise 6/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order06();
				
			break;
			}

			case 7: {
				// Exercise 7/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order07();
				
			break;
			}

			case 8: {
				// Exercise 8/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				cout << "\n\tResult:\t";
				order08();
				
			break;
			}

			case 9: {
				// Exercise 9/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order09();
				
			break;
			}

			case 10: {
				// Exercise 10/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order10();
				
			break;
			}

			case 11: {
				// Exercise 11/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order11();
				
			break;
			}

			case 12: {
				// Exercise 12/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order12();
				
			break;
			}

			case 13: {
				// Exercise 13/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order13();
				
			break;
			}

			case 14: {
				// Exercise 14/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order14();
				
			break;
			}

			case 15: {
				// Exercise 15/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order15();
				
			break;
			}

			case 16: {
				// Exercise 16/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order16();
				
			break;
			}

			case 17: {
				// Exercise 17/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order17();
				
			break;
			}

			case 18: {
				// Exercise 18/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order18();
				
			break;
			}

			case 19: {
				// Exercise 19/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order19();
				
			break;
			}

			case 20: {
				// Exercise 20/20
				cout << "\n\tExercise " << mode << "/" << exNum << endl;
				cout << "\t" << exercise[mode - 1] << endl;

				order20();
				
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