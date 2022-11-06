// Programming on C++
// Exercises
// Chapter 4, I
// Recurrent relations

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void mainFunc(double (*recRelPointer)(int)) {
	int n;
	cout << "\n\tEnter sequence member number n = ";
	cin >> n;
	cout << "\n\tResult:\n" << endl;
	recRelPointer(n);
}

// Exercise 1/20
double recRel01(int n) {
	double b1 = 9;
	cout << "\t ";
	for(int i = 1; i <= n; i++) {
		cout << b1 << ", ";
		b1 = 0.1 * b1 + 10;
	}
	return b1;
}

// Exercise 2/20
double recRel02(int n) {
	double b1 = -1;
	cout << "\t ";
	for(int i = 1; i <= n; i++) {
		cout << b1 << ", ";
		b1 = 9 - 2 * b1;
	}
	return b1;
}

// Exercise 3/20
double recRel03(int n) {
	double b1 = 1;
	cout << "\t ";
	for(int i = 1; i <= n; i++) {
		cout << b1 << ", ";
		b1 = 0.2 * pow(b1, 4) + 1;
	}
	return b1;
}

// Exercise 4/20
double recRel04(int n) {
	double b1 = 4.7;
	cout << "\t ";
	for(int i = 1; i <= n; i++) {
		cout << b1 << ", ";
		b1 = sin(b1) + 3.14159265;
	}
	return b1;
}

// Exercise 5/20
double recRel05(int n) {
	double b1 = 0.1;
	cout << "\t ";
	for(int i = 0; i < n; i++) {
		cout << b1 << ", ";
		b1 = (0.05 + pow(b1, 3)) / 6;
	}
	return b1;
}

// Exercise 6/20
double recRel06(int n) {
	double b1 = 2;
	cout << "\t ";
	for(int i = 0; i < n; i++) {
		cout << b1 << ", ";
		b1 = 0.5 * (1 / b1 + b1);
	}
	return b1;
}

// Exercise 7/20
double recRel07(int n) {
	double b1 = 5;
	cout << "\t ";
	for(int i = 0; i < n; i++) {
		cout << b1 << ", ";
		b1 = pow(-1, i + 2) * b1 - 8;
	}
	cout << endl;
	return b1;
}

// Exercise 8/20
double recRel08(int n) {
	double b, b1 = -1, b2 = 1;
	cout << "\tb1:\t" << b1 << "\n\tb2:\t" << b2 << endl;
	for(int i = 3; i <= n; i++) {
		b = 3 * b2 - 2 * b1;
		cout << "\tb" << i << ":\t" << b << endl;
		b1 = b2, b2 = b;
	}
	return b;
}

// Exercise 9/20
double recRel09(int n) {
	double b, b1 = -10, b2 = 2;
	cout << "\tb1:\t" << b1 << "\n\tb2:\t" << b2 << endl;
	for(int i = 3; i <= n; i++) {
		b = fabs(b1) - 6 * b2;
		cout << "\tb" << i << ":\t" << b << endl;
		b1 = b2, b2 = b;
	}
	return b;
}

// Exercise 10/20
double recRel10(int n) {
	double b, b1 = 2, b2 = 4;
	cout << "\tb1:\t" << b1 << "\n\tb2:\t" << b2 << endl;
	for(int i = 3; i <= n; i++) {
		b = 6 * b2 - b1;
		cout << "\tb" << i << ":\t" << b << endl;
		b1 = b2, b2 = b;
	}
	return b;
}

// Exercise 11/20
double recRel11(int n) {
	double b = 5;
	for(int i = 1; i <= n; i++) {
		cout << "\tb" << i << ":\t" << b << endl;
		b = b / (pow(i + 1, 2) + i + 2);
	}
	return b;
}

// Exercise 12/20
double recRel12(int n) {
	double b, b1 = 0.5, b2 = 0.2;
	cout << "\tb1:\t" << b1 << "\n\tb2:\t" << b2 << endl;
	for(int i = 3; i <= n; i++) {
		b = b2 * b2 + b1 / (i - 1);
		cout << "\tb" << i << ":\t" << b << endl;
		b1 = b2, b2 = b;
	}
	return b;
}

// Exercise 13/20
double recRel13(int N) {
	double b = 1;
	cout << "\tb1:\t" << b << endl;
	for(int n = 2; n <= N; n++) {
		b = (3 * b + 1 / (3 * b)) / 4;
		cout << "\tb" << n << ":\t" << b << endl;
	}
	return b;
}

// Exercise 14/20
double recRel14(int N) {
	if(N < 1) {
		cout << "\t \"n\" must be bigger then 0\n";
		return 0;
	}
	double b1 = 2, b2 = 1, b = b2;
	cout << "\tb1:\t" << b1 << endl;
	if(N < 2) return b1;
	cout << "\tb2:\t" << b2 << endl;
	for(int n = 3; n <= N; n++) {
		b = 2 * b1 / 3 - b2 * b2 / 3;
		cout << "\tb" << n << ":\t" << b << endl;
		b1 = b2, b2 = b;
	}
	return b;
}

// Exercise 15/20
double recRel15(int N) {
	if(N < 1) {
		cout << "\t \"n\" must be bigger then 0\n";
		return 0;
	}
	double b1 = 1, b2 = 2, b = b2;
	cout << "\tb1:\t" << b1 << endl;
	if(N < 2) return b1;
	cout << "\tb2:\t" << b2 << endl;
	for(int n = 3; n <= N; n++) {
		b = b1 / 4 + 5 / pow(b2, 2);
		cout << "\tb" << n << ":\t" << b << endl;
		b1 = b2, b2 = b;
	}
	return b;
}

// Exercise 16/20
double recRel16(int N) {
	if(N < 1) {
		cout << "\tSequence member number must be bigger then 0\n";
		return 0;
	}
	double b1 = 1, b2 = 2, b = b2;
	cout << "\tb1:\t" << b1 << endl;
	if(N < 2) return b1;
	cout << "\tb2:\t" << b2 << endl;
	for(int n = 3; n <= N; n++) {
		b = (n * b1 - b2) / (n + 1);
		cout << "\tb" << n << ":\t" << b << endl;
		b1 = b2, b2 = b;
	}
	return b;
}

// Exercise 17/20
double recRel17(int N) {
	if(N < 1) {
		cout << "\tSequence member number must be bigger then 0\n";
		return 0;
	}
	double b1 = 4, b2 = 2, b = b2;
	cout << "\tb1:\t" << b1 << endl;
	if(N < 2) return b1;
	cout << "\tb2:\t" << b2 << endl;
	for(int n = 3; n <= N; n++) {
		b = b1 / n + n * n / b2;
		cout << "\tb" << n << ":\t" << b << endl;
		b1 = b2, b2 = b;
	}
	return b;
}

// Exercise 18/20
double recRel18(int N) {
	if(N < 1) {
		cout << "\tSequence member number must be bigger then 0\n";
		return 0;
	}
	double b1 = 100;
	cout << "\tb1:\t" << b1 << endl;
	for(int n = 2; n <= N; n++) {
		b1 = ((n%2) ? b1 + 10 : b1 / 10);
		cout << "\tb" << n << ":\t" << b1 << endl;
	}
	return b1;
}

// Exercise 19/20
double recRel19(int N) {
	if(N < 1) {
		cout << "\tSequence member number must be bigger then 0\n";
		return 0;
	}
	double b1 = 0;
	cout << "\tb1:\t" << b1 << endl;
	for(int n = 2; n <= N; n++) {
		b1 = ((n%2) ? 2 * b1 : b1 + 3);
		cout << "\tb" << n << ":\t" << b1 << endl;
	}
	return b1;
}

// Exercise 20/20
double recRel20(int N) {
	if(N < 1) {
		cout << "\tSequence member number must be bigger then 0\n";
		return 0;
	}
	double b1 = 1, b2 = 5, b = b2;
	cout << "\tb1:\t" << b1 << endl;
	if(N < 2) return b1;
	cout << "\tb2:\t" << b2 << endl;
	for(int n = 3; n <= N; n++) {
		b = ((n%2) ? b2 - b1 : b2 + b1);
		cout << "\tb" << n << ":\t" << b << endl;
		b1 = b2, b2 = b;
	}
	return b;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 4, I\n" << endl;

	const int exNum = 20;
	int mode;
	string exerHead = "Recurrent sequence";
	typedef double (*recRelP)(int);
	recRelP recRel[] = {recRel01, recRel02, recRel03, recRel04, recRel05, recRel06, recRel07, recRel08, recRel09, 
	recRel10, recRel11, recRel12, recRel13, recRel14, recRel15, recRel16, recRel17, recRel18, recRel19, recRel20};

	do{
		cout << "\n\n\tPlease choise the number from 0 to " << exNum << endl;
		cout << "\n\t\t0 \t- Exit" << endl;

		for(int i = 1; i <= exNum; i++) {
			cout << "\t\t" << i << " \t- " << exerHead << " " << i << endl;
		}

		// cout << setprecision(4) << fixed;
		cout << "\t";

		cin >> mode;

		if(mode > 0 && mode <= exNum) {
			cout << "\n\t" << exerHead << " " << mode << "/" << exNum << endl;
			mainFunc(recRel[mode - 1]);
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