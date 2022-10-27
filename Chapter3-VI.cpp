// Programming on C++
// Exercises
// Chapter 3, VI
// Operators, Cycles

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void funcTable(double (*funcPointer)(double)) {
	double a, b, h;
	cout << "\n\tInput start of range \"a\"" << endl;
	cin >> a;
	cout << "\n\tInput end of range \"b\"" << endl;
	cin >> b;
	cout << "\n\tInput argument step \"h\"" << endl;
	cin >> h;
	cout << "\n\tResult:\n" << endl;
	if(!h) {
		cout << "\tFunction step is set incorrectly" << endl;
		return;
	}
	cout << "\tx:\t|\tf(x):" << endl;
	h = fabs(h);
	for(double x = ((a < b) ? a : b); x <= ((a > b) ? a : b); x += h) {
		cout << "\t " << x << "\t|\t " << funcPointer(x) << endl;
	}
}

// Exercise 1/20
double func01(double x) {
    if(x < 0) {
        return x * x + 0.2;
    }else if(x < 0.9) {
        return 0.2 * x + 0.1;
    } else{
        return 1 / pow(0.1 + x, 2);
    }
}

// Exercise 2/20
double func02(double x) {
    if(fabs(x) < 3) {
        return sin(x);
    }else if(fabs(x) < 9) {
        return sqrt(x * x + 1) / sqrt(x * x + 5);
    } else{
        return sqrt(x * x + 1) - sqrt(x * x + 5);
    }
}

// Exercise 3/20
double func03(double x) {
	return 1;
}

// Exercise 4/20
double func04(double x) {
    if(fabs(x) > 0.2) {
        return x * x * x + 0.1;
    }else if(fabs(x) > 0.1) {
        return 0.2 * x - 0.1;
    } else{
        return x * x * x - 0.1;
    }
}

// Exercise 5/20
double func05(double x) {
	return x * x;
}

// Exercise 6/20
double func06(double x) {
}

// Exercise 7/20
double func07(double x) {
}

// Exercise 8/20
double func08(double x) {
}

// Exercise 9/20
double func09(double x) {
}

// Exercise 10/20
double func10(double x) {
}

// Exercise 11/20
double func11(double x) {
}

// Exercise 12/20
double func12(double x) {
}

// Exercise 13/20
double func13(double x) {
}

// Exercise 14/20
double func14(double x) {
}

// Exercise 15/20
double func15(double x) {
}

// Exercise 16/20
double func16(double x) {
}

// Exercise 17/20
double func17(double x) {
}

// Exercise 18/20
double func18(double x) {
}

// Exercise 19/20
double func19(double x) {
}

// Exercise 20/20
double func20(double x) {
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 3, VI\n" << endl;

	const int exNum = 20;
	int mode;
	string exerHead = "Function Table";
	typedef double (*funcP)(double);
	funcP func[] = {func01, func02, func03, func04, func05, func06, func07, func08, func09, 
	func10, func11, func12, func13, func14, func15, func16, func17, func18, func19, func20};

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
			funcTable(func[mode - 1]);
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