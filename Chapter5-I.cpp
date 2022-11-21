// Programming on C++
// Exercises
// Chapter 5, I
// Recurrent relations

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void mainFunc(double (*recRelSumPointer)(int)) {
	int n;
	cout << "\n\tEnter sequence member number n = ";
	cin >> n;
	cout << "\n\tResult:\n" << endl;
	recRelSumPointer(n);
}

// Exercise 1/20
double recRelSum01(int N) {
	if(N < 1) {
		cout << "\tSequence member number must be bigger then 0\n";
		return 0;
	}
	double b1 = 1, s = 0;
	if(N < 2) {
		cout << "\tSumm = " << b1 * b1 << endl;
		return b1 * b1;
	}
	for(int n = 1; n <= N; n++) {
		s += n * n;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 2/20
double recRelSum02(int N) {
	if(N < 1) {
		cout << "\tSequence member number must be bigger then 0\n";
		return 0;
	}
	double b1 = 1, s = 0;
	if(N < 2) {
		cout << "\tSumm = " << b1 << endl;
		return b1;
	}
	for(int n = 1; n <= N; n++) {
		s += sqrt(n);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 3/20
double recRelSum03(int N) {
	if(N < 1) {
		cout << "\tSequence member number must be bigger then 0\n";
		return 0;
	}
	double b = 1, s = 0;
	if(N < 2) {
		cout << "\tSumm = " << b << endl;
		return b;
	}
	for(int n = 1; n <= N; n++) {
		b = 1.0 / n;
		s += b;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 4/20
double recRelSum04(int N) {
	if(N < 1) {
		cout << "\tSequence member number must be bigger then 0\n";
		return 0;
	}
	double s = 1;
	if(N < 2) {
		cout << "\tSumm = " << s << endl;
		return s;
	}
	for(int n = 2; n <= N; n++) {
		s += 1.0 / (n * n);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 5/20
double recRelSum05(int N) {
	if(N < 1) {
		cout << "\tSequence member number must be bigger then 0\n";
		return 0;
	}
	double s = 1;
	if(N < 2) {
		cout << "\tSumm = " << s << endl;
		return s;
	}
	for(int n = 2; n <= N; n++) {
		s += 1.0 / sqrt(n);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 6/20
double recRelSum06(int N) {
	double s = 0;
	for(int n = 1; n <= N; n++) {
		s += 1.0 / sin(n);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 7/20
double recRelSum07(int N) {
	double s = 0;
	for(int n = 1, a = 1; n <= N; n++, a *= 2) {
		s += a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 8/20
double recRelSum08(int N) {
	double s = 0;
	for(int n = 1, sign = 1; n <= N; n++, sign = -sign) {
		s += sign * cos(n);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 9/20
double recRelSum09(int N) {
	double s = 0;
	for(int n = 1, a = 1; n <= N; n++, a *= n) {
		s += a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 10/20
double recRelSum10(int N) {
	double s = 0;
	for(int n = 1, a = 1, sign = 1; n <= N; n++, a *= 3, sign = -sign) {
		s += sign * a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 11/20
double recRelSum11(int N) {
	double s = 0;
	for(int n = 1, a = 1, sign = 1; n <= N; n++, a *= n, sign = -sign) {
		s += sign * a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 12/20
double recRelSum12(int N) {
	double s = 0;
	for(int n = 1, x = 3; n <= N; n++, x *= 3) {
		s += sin(x);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 13/20
double recRelSum13(int N) {
	double s = 0;
	for(int n = 1, a = 1; n <= N; n++, a *= n) {
		s += 1.0 / a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 14/20
double recRelSum14(int N) {
	double s = 0;
	for(int n = 1, sign = -1, a = 2; n <= N; n++, a *= 2, sign = -sign) {
		s += sign * 1.0 / a;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 15/20
double recRelSum15(int N) {
	double s = 0;
	for(int n = 1, sign = 1; n <= N; n++, sign = -sign) {
		s += sign * n * n * n;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 16/20
double recRelSum16(int N) {
	double s = 0, x = 2, b = x;
	for(int n = 1; n <= N; n++) {
		s += b;
		b *= x * x * (2 * n + 1) / (2 * n - 1);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 17/20
double recRelSum17(int N) {
	double s = 0, x = 0, b = cos(x);
	for(int n = 1; n <= N; n++) {
		s += b;
		b *= cos(x) * n / (n + 1);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 18/20
double recRelSum18(int N) {
	double s = 0;
	for(int n = 1, sign = 1; n <= N; n++, sign = -sign) {
		s += sign / pow(2 * n + 1, 2);
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 19/20
double recRelSum19(int N) {
	double s = 0, b = 0;
	for(int n = 1; n <= N; n++) {
		b += sin(n);
		s += 1 / b;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

// Exercise 20/20
double recRelSum20(int N) {
	double s = 0, x = 1, b = x;
	for(int n = 1; n <= N; n++) {
		b = sin(b);
		s += b;
	}
	cout << "\tSumm = " << s << endl;
	return s;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 5, I\n" << endl;

	const int exNum = 20;
	int mode;
	string exerHead = "Recurrent sequence summ";
	//typedef double (*recRelSumP)(int);
	double (*recRelSum[])(int) = {recRelSum01, recRelSum02, recRelSum03, recRelSum04, recRelSum05, recRelSum06, recRelSum07, recRelSum08, recRelSum09, 
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