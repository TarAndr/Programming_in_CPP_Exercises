// Programming on C++
// Exercises
// Chapter 3, V
// Operators, Cycles

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Exercise 1/20
void funcTable01(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x == -1) {
			cout << "not defined" << endl;
		} else{
			cout << 1 / pow(1 + x, 2) << endl;
		}
	}
}

// Exercise 2/20
void funcTable02(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x == -1 || x == 1) {
			cout << "not defined" << endl;
		} else{
			cout << 1 / (pow(x, 2) - 1) << endl;
		}
	}
}

// Exercise 3/20
void funcTable03(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x > -1 && x < 1) {
			cout << "not defined" << endl;
		} else{
			cout << sqrt(pow(x, 2) - 1) << endl;
		}
	}
}

// Exercise 4/20
void funcTable04(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(5 - pow(x, 3) < 0) {
			cout << "not defined" << endl;
		} else{
			cout << sqrt(5 - pow(x, 3)) << endl;
		}
	}
}

// Exercise 5/20
void funcTable05(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x <= 1) {
			cout << "not defined" << endl;
		} else{
			cout << log(x - 1) << endl;
		}
	}
}

// Exercise 6/20
void funcTable06(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(4 - pow(x, 2) <= 0) {
			cout << "not defined" << endl;
		} else{
			cout << log(4 - pow(x, 2)) << endl;
		}
	}
}

// Exercise 7/20
void funcTable07(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x <= 0.5) {
			cout << "not defined" << endl;
		} else{
			cout << x / sqrt(2 * x - 1) << endl;
		}
	}
}

// Exercise 8/20
void funcTable08(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x <= -1) {
			cout << "not defined" << endl;
		} else{
			cout << (3 * x + 4) / (x * x + 2 * x + 1) << endl;
		}
	}
}

// Exercise 9/20
void funcTable09(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x == 1 || x == 0.25) {
			cout << "not defined" << endl;
		} else{
			cout << 1 / (x - 1) + 2 / (1 - 4 * x) << endl;
		}
	}
}

// Exercise 10/20
void funcTable10(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x == 2) {
			cout << "not defined" << endl;
		} else{
			cout << log(fabs(x - 2)) << endl;
		}
	}
}

// Exercise 11/20
void funcTable11(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x >= 0 && x <= 2) {
			cout << "not defined" << endl;
		} else{
			cout << log(x / (x - 2)) << endl;
		}
	}
}

// Exercise 12/20
void funcTable12(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x <= 1) {
			cout << "not defined" << endl;
		} else{
			cout << log(pow(x, 4) - 1) * log(1 + x) << endl;
		}
	}
}

// Exercise 13/20
void funcTable13(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x <= 2) {
			cout << "not defined" << endl;
		} else{
			cout << log(x - 2) / sqrt(5 * x + 1) << endl;
		}
	}
}

// Exercise 14/20
void funcTable14(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x >= 2 || x == 1.5) {
			cout << "not defined" << endl;
		} else{
			cout << sqrt(x * x - 2 * x + 1) / log(4 - 2 * x) << endl;
		}
	}
}

// Exercise 15/20
void funcTable15(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += fabs(h)) {
		cout << "\t " << x << "\t|\t ";
		if(x == 0 || (2 * pow(x, 5) - 1) < 0) {
			cout << "not defined" << endl;
		} else{
			cout << log(fabs(3 * x)) * sqrt(2 * pow(x, 5) - 1) << endl;
		}
	}
}

// Exercise 16/20
void funcTable16(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	h = fabs(h);
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += h) {
		cout << "\t " << x << "\t|\t ";
		if(x == -2) {
			cout << "not defined" << endl;
		} else{
			cout << 3 / fabs(pow(x, 3) + 8) << endl;
		}
	}
}

// Exercise 17/20
void funcTable17(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	h = fabs(h);
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += h) {
		cout << "\t " << x << "\t|\t ";
		if(x < 1 || fabs(x) == sqrt(2)) {
			cout << "not defined" << endl;
		} else{
			cout << (x + 4) / (pow(x, 2) - 2) + sqrt(pow(x, 3) - 1) << endl;
		}
	}
}

// Exercise 18/20
void funcTable18(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	h = fabs(h);
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += h) {
		cout << "\t " << x << "\t|\t ";
		if(!h) {
			cout << "not defined" << endl;
		} else{
			cout << sqrt(pow(x, 2) + 1) - sqrt(pow(x, 2) + 5) << endl;
		}
	}
}

// Exercise 19/20
void funcTable19(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	h = fabs(h);
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += h) {
		cout << "\t " << x << "\t|\t ";
		if(x <= 1) {
			cout << "not defined" << endl;
		} else{
			cout << sqrt(pow(x, 3) - 1) / sqrt(pow(x, 2) - 1) << endl;
		}
	}
}

// Exercise 20/20
void funcTable20(double a, double b, double h) {
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	h = fabs(h);
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += h) {
		cout << "\t " << x << "\t|\t ";
		if(x <= -1 || x >= 1) {
			cout << "not defined" << endl;
		} else{
			cout << 1 / (x + 7) + log(1 - fabs(x)) << endl;
		}
	}
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 3, V\n" << endl;

	const int exNum = 20;
	int mode;
	double a, b, h;
	string exerHead = "Function Table";

	do{

		cout << "\n\n\tPlease choise the number from 0 to " << exNum << endl;
		cout << "\n\t\t0 \t- Exit" << endl;

		for(int i = 1; i <= exNum; i++) {
			cout << "\t\t" << i << " \t- " << exerHead << " " << i << endl;
		}

		cout << setprecision(4) << fixed;
		cout << "\t";

		cin >> mode;

		if(mode > 0 && mode <= exNum) {
			cout << "\n\t" << exerHead << " " << mode << "/" << exNum << endl;
			cout << "\n\tInput start of range \"a\"" << endl;
			cin >> a;
			cout << "\n\tInput end of range \"b\"" << endl;
			cin >> b;
			cout << "\n\tInput argument step \"h\"" << endl;
			cin >> h;
			cout << "\n\tResult:\n" << endl;
		}

		switch(mode) {
			
			case 1: {
				// Exercise 1/20

				funcTable01(a, b, h);
				
			break;
			}
			
			case 2: {
				// Exercise 2/20

				funcTable02(a, b, h);
				
			break;
			}

			case 3: {
				// Exercise 3/20

				funcTable03(a, b, h);
				
			break;
			}

			case 4: {
				// Exercise 4/20

				funcTable04(a, b, h);
				
			break;
			}
			
			case 5: {
				// Exercise 5/20

				funcTable05(a, b, h);
				
			break;
			}

			case 6: {
				// Exercise 6/20

				funcTable06(a, b, h);
				
			break;
			}

			case 7: {
				// Exercise 7/20

				funcTable07(a, b, h);
				
			break;
			}

			case 8: {
				// Exercise 8/20

				funcTable08(a, b, h);
				
			break;
			}

			case 9: {
				// Exercise 9/20

				funcTable09(a, b, h);
				
			break;
			}

			case 10: {
				// Exercise 10/20

				funcTable10(a, b, h);
				
			break;
			}

			case 11: {
				// Exercise 11/20

				funcTable11(a, b, h);
				
			break;
			}

			case 12: {
				// Exercise 12/20

				funcTable12(a, b, h);
				
			break;
			}

			case 13: {
				// Exercise 13/20

				funcTable13(a, b, h);
				
			break;
			}

			case 14: {
				// Exercise 14/20

				funcTable14(a, b, h);
				
			break;
			}

			case 15: {
				// Exercise 15/20

				funcTable15(a, b, h);
				
			break;
			}

			case 16: {
				// Exercise 16/20

				funcTable16(a, b, h);
				
			break;
			}

			case 17: {
				// Exercise 17/20

				funcTable17(a, b, h);
				
			break;
			}

			case 18: {
				// Exercise 18/20

				funcTable18(a, b, h);
				
			break;
			}

			case 19: {
				// Exercise 19/20

				funcTable19(a, b, h);
				
			break;
			}

			case 20: {
				// Exercise 20/20

				funcTable20(a, b, h);
				
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