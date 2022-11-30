// Programming on C++
// Exercises
// Chapter 5, II
// Calculating sums of sequences

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void mainFunc(double (*recRelSumPointer)(int, double)) {
	int k;
	cout << "\n\tEnter sequence member number k = ";
	cin >> k;
	double x;
	cout << "\n\tEnter number x = ";
	cin >> x;
	cout << "\n\tResult:\n" << endl;
	recRelSumPointer(k, x);
}

// Exercise 1/20
double recRelSum01(int k, double x) {
	double s = 0, a = x;
	for(int n = 1; n <= k; n++) {
		s += a / n;
		a *= x;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 2/20
double recRelSum02(int k, double x) {
	double s = 0, a = 2;
	for(int n = 1; n <= k; n++) {
		s += a / (n * n);
		a *= 2 * (n + 1);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 3/20
double recRelSum03(int k, double x) {
	double s = 0;
	for(int n = 1, sign = 1; n <= k; n++, sign = -sign) {
		s += (double) sign / (n * n);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 4/20
double recRelSum04(int k, double x) {
	if(!x) k = 0;
	double s = 0, a = 0.25;
	for(int n = 1; n <= k; n++) {
		s += a;
		a *= pow(x * (2 * n - 1) / (2 * n + 1), 2);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 5/20
double recRelSum05(int k, double x) {
	double s = 0, a = x;
	for(int n = 1, sign = -1; n <= k; n++, sign = -sign) {
		s += a;
		a *= sign * x * x / (4 * n * n + 2 * n);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 6/20
double recRelSum06(int k, double x) {
	double s = 0, a = 1;
	for(int n = 1; n <= k; n++) {
		a *= n;
		s += 1 / a * n;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 7/20
double recRelSum07(int k, double x) {
	double s = 0, a = -x;
	for(int n = 0, sign = 1; n <= k; n++, sign = -sign) {
		s += sign * a;
		a *= x * x / (4 * n * n + 10 * n + 6);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 8/20
double recRelSum08(int k, double x) {
	if(!x) k = 0;
	double s = 0, a = x / 2;
	for(int n = 1, sign = 1; n <= k; n++, sign = -sign) {
		s += sign * a;
		a *= x / (4 * n * n + 6 * n + 2);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 9/20
double recRelSum09(int k, double x) {
	if(!x) k = 0;
	double s = 0, a = x * x / 2;
	for(int n = 1, sign = 1; n <= k; n++, sign = -sign) {
		s += sign * a;
		a *= x * x / (4 * n * n + 6 * n + 2);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 10/20
double recRelSum10(int k, double x) {
	if(!x) k = 0;
	double s = 0, a = x / 14;
	for(int n = 1, sign = -1; n <= k; n++, sign = -sign) {
		s += sign * a;
		a *= x * 7 * n / (14 * n + 14);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 11/20
double recRelSum11(int k, double x) {
	double b = 1, p = 0;
	if(k > 0) p = 1;
	for(int n = 1; n <= k; n++) {
		b *= x;
		p *= 1 + b / (n * n);
	}
	cout << "\tSumm = " << p << endl;
	return p;
}

// Exercise 12/20
double recRelSum12(int k, double x) {
	double b = x, p = 0;
	if(k > 0) p = 1;
	for(int n = 1; n <= k; n++) {
		b *= x * x;
		p *= 1 + b / (n * (n + 1));
	}
	cout << "\tSumm = " << p << endl;
	return p;
}

// Exercise 13/20
double recRelSum13(int k, double x) {
	double b = 1, p = 0;
	if(k > 0) p = 1;
	for(int n = 1; n <= k; n++) {
		b *= x / n;
		p *= 1 - b;
	}
	cout << "\tSumm = " << p << endl;
	return p;
}

// Exercise 14/20
double recRelSum14(int k, double x) {
	double b = 1, p = 0;
	if(k > 0) p = 1;
	for(int n = 1, sign = -1; n <= k; n++, sign = -sign) {
		b *= x * x;
		p *= 1 + sign * b / (n * n * n);
	}
	cout << "\tSumm = " << p << endl;
	return p;
}

// Exercise 15/20
double recRelSum15(int k, double x) {
	double b = 1, p = 0;
	if(k > 0) p = 1;
	for(int n = 1, sign = 1; n <= k; n++, sign = -sign) {
		b *= x / n;
		p *= 1 + sign * b;
	}
	cout << "\tSumm = " << p << endl;
	return p;
}

// Exercise 16/20
double recRelSum16(int k, double x) {
	double b = 1, p = 0;
	if(k > 0) p = 1;
	for(int n = 1; n <= k; n++) {
		b *= x * x;
		p *= 1 + b / (n * n + 4 * n);
	}
	cout << "\tSumm = " << p << endl;
	return p;
}

// Exercise 17/20
double recRelSum17(int k, double x) {
	double b = x, p = 0;
	if(k > 0) p = 1;
	for(int n = 1, sign = -1; n <= k; n++, sign = -sign) {
		b *= x * x;
		p *= 1 + sign * b / (n * n * n + n * n);
	}
	cout << "\tSumm = " << p << endl;
	return p;
}

// Exercise 18/20
double recRelSum18(int k, double x) {
	double b = 0.5, p = 0;
	if(k > 0) p = 1;
	for(int n = 1; n <= k; n++) {
		b *= x / n;
		p *= 1 + b;
	}
	cout << "\tSumm = " << p << endl;
	return p;
}

// Exercise 19/20
double recRelSum19(int k, double x) {
	double b = x, p = 0;
	if(k > 1) p = 1;
	for(int n = 2, sign = 1; n <= k; n++, sign = -sign) {
		b *= x * x;
		p *= 1 + sign * b / (n * n * n - 1);
	}
	cout << "\tSumm = " << p << endl;
	return p;
}

// Exercise 20/20
double recRelSum20(int k, double x) {
	double b = 1, p = 0;
	if(k >= 0) p = 1;
	for(int n = 0, sign = -1; n <= k; n++, sign = -sign) {
		p *= 1 + sign * b / ((n + 2) * (n + 1));
		b *= x * x;
	}
	cout << "\tSumm = " << p << endl;
	return p;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 5, II\n" << endl;

	const int exNum = 20;
	int mode;
	string exerHead = "Recurrent sequence summ";
	//typedef double (*recRelSumP)(int);
	double (*recRelSum[])(int, double) = {recRelSum01, recRelSum02, recRelSum03, recRelSum04, recRelSum05, recRelSum06, recRelSum07, recRelSum08, recRelSum09, 
	recRelSum10, recRelSum11, recRelSum12, recRelSum13, recRelSum14, recRelSum15, recRelSum16, recRelSum17, recRelSum18, recRelSum19, recRelSum20};

	do{
		cout << "\n\n\tPlease choise the number from 0 to " << exNum << endl;
		cout << "\n\t\t0 \t- Exit" << endl;

		for(int i = 1; i <= exNum; i++) {
			cout << "\t\t" << i << " \t- " << exerHead << " " << i << endl;
		}

		//cout << setprecision(4) << fixed;
		cout << "\t";

		cin >> mode;

		if(mode > 0 && mode <= exNum) {
			cout << "\n\t" << exerHead << " " << mode << "/" << exNum << endl;
			mainFunc(recRelSum[mode - 1]);
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