// Programming on C++
// Exercises
// Chapter 5, III
// Calculating infinite sum of series with given precision

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void mainFunc(double (*infSerSumPointer)(double)) {
	double accuracy;
	cout << "\n\tEnter the accuracy of calculating the sum of the series e = ";
	cin >> accuracy;
	cout << "\n\tResult:\n" << endl;
	infSerSumPointer(accuracy);
}

// Exercise 1/20
double infSerSum01(double e) {
	double a = e, s = 0;
	for(int i = 1; e <= a; i++) {
		a = 1.0 / (i * i);
		s += a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 2/20
double infSerSum02(double e) {
	double a = e, s = 0;
	for(int i = 1; e <= a; i++) {
		a = 1.0 / pow(i + 1, 3);
		s += a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 3/20
double infSerSum03(double e) {
	double a = e, s = 0;
	for(int i = 2, sign = 1; e <= a; i++, sign = -sign) {
		a = 1.0 / (i * i - 1);
		s += sign * a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 4/20
double infSerSum04(double e) {
	double a = e, s = 0;
	for(int i = 1; e <= a; i++) {
		a = 1.0 / (i * (i + 1));
		s += a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 5/20
double infSerSum05(double e) {
	double a = e, s = 0;
	for(int i = 2; e <= a; i++) {
		a = 5.0 / ((i - 1) * (i + 1));
		s += a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 6/20
double infSerSum06(double e) {
	double a = e, s = 0, x = -2;
	for(int i = 1; e <= fabs(a); i++) {
		x *= -2;
		a = x / (i * (2 * i + 1));
		s += a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 7/20
double infSerSum07(double e) {
	double a = 2, s = 0;
	for(int i = 1; e <= a; i++) {
		a *= 1.0 / i;
		s += a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 8/20
double infSerSum08(double e) {
	double a = 1, s = 0;
	for(int i = 1; e <= a; i++) {
		a *= 1.0 / (2 * i * (2 * i - 1));
		s += a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 9/20
double infSerSum09(double e) {
	double a = 1, s = 0;
	for(int i = 1, sign = -1; e <= a; i++, sign = -sign) {
		s += sign * a;
		a *= 1.0 / (2 * i * (2 * i + 1));
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 10/20
double infSerSum10(double e) {
	double a = 0.5, s = 0;
	for(int i = 1, sign = 1; e <= a; i++, sign = -sign) {
		a *= 1.0 / i;
		s += sign * a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 11/20
double infSerSum11(double e) {
	double a = 1.0 / 6, s = 0;
	for(int i = 1; e <= a; i++) {
		s += a;
		a *= (double) i / (i + 3);
		cout << "\t" << i << " :\t" << s << endl;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 12/20
double infSerSum12(double e) {
	double a = 1.0 / 6, s = 0;
	for(int i = 3, sign = -1; e <= a; i++) {
		s += sign * a;
		a *= (double) (i - 2) / (i + 1);
		cout << "\t" << i << " :\t" << s << endl;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 13/20
double infSerSum13(double e) {
	double a = 1.0 / 3, s = 0;
	for(int i = 1; e <= a; i++) {
		a *= 9.0 / i;
		s += a;
		cout << "\t" << i << " :\t" << s << endl;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 14/20
double infSerSum14(double e) {
	double a = -1, s = 0;
	for(int i = 1; e <= -a; i++) {
		s += a;
		a *= 25.0 / 2 * i * (2 * i + 1);
		cout << "\t" << i << " :\t" << s << endl;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 15/20
double infSerSum15(double e) {
	double a = 1, s = 0;
	for(int i = 1; e <= a; i++) {
		a /= 2;
		s += a;
		cout << "\t" << i << " :\t" << s << endl;
	}
	cout << "\n\tSumm = " << s << endl;
	return s;
}

// Exercise 16/20
double infSerSum16(double e) {
	double a = e, s = 0;
	cout << "\tn:\ta:\t\ts:\n";
	for(int i = 1, x = 1, y = 1; e <= a; i++) {
		x *= 3;
		y *= 4;
		a = 1.0 / (x + y);
		s += a;
		cout << "\t" << i << "\t" << a << "\t" << s << "\n";
	}
	cout << "\n\tSumm = " << s << "\n";
	return s;
}

// Exercise 17/20
double infSerSum17(double e) {
	double a = e, s = 0;
	cout << "\tn:\ta:\t\ts:\n";
	for(int i = 1, x = 1, y = 4; e <= a; i++) {
		x *= 5;
		y *= 4;
		a = 1.0 / (x + y);
		s += a;
		cout << "\t" << i << "\t" << a << "\t" << s << "\n";
	}
	cout << "\n\tSumm = " << s << "\n";
	return s;
}

// Exercise 18/20
double infSerSum18(double e) {
	double a = 1, s = 0;
	cout << "\tn:\ta:\t\ts:\n";
	for(int i = 1, sign = -1; e <= a; i++, sign = -sign) {
		a /= 4;
		s += sign * a;
		cout << "\t" << i << "\t" << sign * a << "\t" << s << "\n";
	}
	cout << "\n\tSumm = " << s << "\n";
	return s;
}

// Exercise 19/20
double infSerSum19(double e) {
	double a = 3, s = 0;
	cout << "\tn:\ta:\t\ts:\n";
	for(int i = 1, sign = 1; e <= a; i++, sign = -sign) {
		a /= 9;
		s += sign * a;
		cout << "\t" << i << "\t" << sign * a << "\t" << s << "\n";
	}
	cout << "\n\tSumm = " << s << "\n";
	return s;
}

// Exercise 20/20
double infSerSum20(double e) {
	double a = 1, s = 0;
	cout << "\tn:\ta:\t\ts:\n";
	for(int i = 1; e <= a; i++) {
		a /= sqrt(3);
		s += a;
		cout << "\t" << i << "\t" << a << "\t" << s << "\n";
	}
	cout << "\n\tSumm = " << s << "\n";
	return s;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 5, III\n" << endl;

	const int exNum = 20;
	int mode;
	string exerHead = "Infinite sum of series with given precision";
	//typedef double (*infSerSumP)(int);
	double (*infSerSum[])(double) = {infSerSum01, infSerSum02, infSerSum03, infSerSum04, infSerSum05, infSerSum06, infSerSum07, infSerSum08, infSerSum09, 
	infSerSum10, infSerSum11, infSerSum12, infSerSum13, infSerSum14, infSerSum15, infSerSum16, infSerSum17, infSerSum18, infSerSum19, infSerSum20};

	do{
		cout << "\n\n\tPlease choise the number from 0 to " << exNum << endl;
		cout << "\n\t\t0 \t- Exit" << endl;

		for(int i = 1; i <= exNum; i++) {
			cout << "\t\t" << i << " \t- " << exerHead << " " << i << endl;
		}

		cout << setprecision(7) << fixed;
		cout << "\t";

		cin >> mode;

		if(mode > 0 && mode <= exNum) {
			cout << "\n\t" << exerHead << " " << mode << "/" << exNum << endl;
			mainFunc(infSerSum[mode - 1]);
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