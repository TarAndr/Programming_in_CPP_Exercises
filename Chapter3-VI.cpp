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
	double temp = x * x + 2 * x + 1;
    if(temp < 2) {
        return x * x;
    }else if(temp < 3) {
        return 1 / (x * x - 1);
    } else{
        return 0;
    }
}

// Exercise 7/20
double func07(double x) {
    if(x < 0) {
        return -4;
    }else if(x < 1) {
        return x * x + 3 * x + 4;
    } else{
        return 2;
    }
}

// Exercise 8/20
double func08(double x) {
	double temp = fabs(x);
    if(temp > 2) {
        return pow(x, 5) - 1;
    }else if(temp > 1) {
        return 2 * x - 1;
    } else{
        return x * x - 1;
    }
}

// Exercise 9/20
double func09(double x) {
    if(x == 1) {
        return 0;
    }else if(x < 1) {
        return pow(x * x - 1, 2);
    } else{
        return 1 / pow(1 + x, 2);
    }
}

// Exercise 10/20
double func10(double x) {
	double temp = x + 2;
    if(temp <= 1) {
        return x * x;
    }else if(temp >= 10) {
        return temp;
    } else{
        return 1 / temp;
    }
}

// Exercise 11/20
double func11(double x) {
    if(x <= 5) {
        return x * x + 5;
    }else if(x >= 20) {
        return 1;
    } else{
        return 0;
    }
}

// Exercise 12/20
double func12(double x) {
    if(x < 0) {
        return 0;
    }else if(x == 1) {
        return 1;
    } else{
        return x * x + 1;
    }
}

// Exercise 13/20
double func13(double x) {
    if(fabs(x) == 1) {
        return 1;
    }else if(x < 0) {
        return 1 / (1 + x);
    } else{
        return -1 / (1 - x);
    }
}

// Exercise 14/20
double func14(double x) {
    if(x == 0.1) {
        return 0;
    }else if(x < 0) {
        return 0.2 * x * x - x - 0.1;
    }else if(x > 0) {
        return x * x / (x - 0.1);
    }
}

// Exercise 15/20
double func15(double x) {
	double temp = x - 1;
    if(temp == 1) {
        return 0;
    }else if(temp < 1) {
        return 1;
    } else{
        return -1;
    }
}

// Exercise 16/20
double func16(double x) {
    if(x > 0) {
        return x;
    }else if(x < -1) {
        return x * x;
    } else{
        return 0;
    }
}

// Exercise 17/20
double func17(double x) {
	return x * 16;
}

// Exercise 18/20
double func18(double x) {
    if(x > 5) {
        return x * x + 1;
    }else if(x < 3) {
        return x * x - 0.3;
    } else{
        return 0;
    }
}

// Exercise 19/20
double func19(double x) {
	return x / 7;
}

// Exercise 20/20
double func20(double x) {
	double temp = fabs(x);
	const double pi = 3.14159265;
    if(temp > pi) {
        return 0;
    }else if(temp < pi / 2) {
        return sin(x);
    } else{
        return cos(x);
    }
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