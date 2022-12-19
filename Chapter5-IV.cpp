// Programming on C++
// Exercises
// Chapter 5, IV
// Calculating infinite sum of series with given precision

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Exercise 1/20
double funcVal01(double x, double e, int &i) {
	double a = x, s = 1;
	for(i = 1; e <= a; i++) {
		a *= x / 4;
		s += a;
	}
	return s;
}

// Exercise 2/20
double funcVal02(double x, double e, int &i) {
	i = 0;
	int sign = -1;
	double a = e, s = 1, y = 1;
	while(e <= a) {
		++i;
		y *= x / 2;
		a = y / (7 * i);
		s += sign * a;
		sign = -sign;
	}
	return s;
}

// Exercise 3/20
double funcVal03(double x, double e, int &i) {
	i = 0;
	int sign = -1;
	double a = e, s = 1, y = 1;
	while(e <= a) {
		++i;
		y *= x * x;
		a = y / (i * (i + 2) * (i + 3));
		s += sign * a;
		sign = -sign;
	}
	return s;
}

// Exercise 4/20
double funcVal04(double x, double e, int &i) {
	i = 0;
	double a = e, s = 1, y = x;
	while(e <= a) {
		++i;
		y *= x * x / 2;
		a = y / (2 * i + 1);
		s += a;
	}
	return s;
}

// Exercise 5/20
double funcVal05(double x, double e, int &i) {
	i = 0;
	int sign = 1;
	double a = e, s = 1, y = 1;
	while(e <= a) {
		++i;
		y *= x;
		a = y / (i * (i + 3));
		s += sign * a;
		sign = -sign;
	}
	return s;
}

// Exercise 6/20
double funcVal06(double x, double e, int &i) {
	i = 0;
	int sign = -1;
	double a = e, s = 1, y = x;
	while(e <= a) {
		++i;
		y *= x * x;
		a = y / ((i + 2) * (i + 3) * (i + 3));
		s += sign * a;
		sign = -sign;
	}
	return s;
}

// Exercise 7/20
double funcVal07(double x, double e, int &i) {
	i = 0;
	double a = 1, s = 1;
	while(e <= a) {
		++i;
		a *= x / 3;
		s += a;
	}
	return s;
}

// Exercise 8/20
double funcVal08(double x, double e, int &i) {
	i = 0;
	double a = e, s = 1, y = x;
	while(e <= a) {
		++i;
		y *= x;
		a = y / ((i * 2) * (2 * i + 2));
		s += a;
	}
	return s;
}

// Exercise 9/20
double funcVal09(double x, double e, int &i) {
	i = 0;
	double a = 1, s = 1;
	while(e <= a) {
		++i;
		a *= x / (2 * i + 1);
		s += a;
	}
	return s;
}

// Exercise 10/20
double funcVal10(double x, double e, int &i) {
	i = 0;
	int sign = -1;
	double a = e, s = -3.14159265 / 2, y = x;
	while(e <= a) {
		++i;
		a = 1 / ((2 * i + 1) * y);
		s += sign * a;
		y *= x * x;
		sign = -sign;
	}
	return s;
}

// Exercise 11/20
double funcVal11(double x, double e, int &i) {
	i = 0;
	double a = 1, s = 0;
	while(e <= a) {
		s += a;
		a *= x / (i + 1);
		++i;
	}
	return s;
}

// Exercise 12/20
double funcVal12(double x, double e, int &i) {
	i = 0;
	int sign = 1;
	double a = 1, s = 0;
	while(e <= a) {
		s += sign * a;
		a *= x / (i + 1);
		sign = -sign;
		++i;
	}
	return s;
}

// Exercise 13/20
double funcVal13(double x, double e, int &i) {
	i = 0;
	double a = 1, s = 0;
	while(e <= a) {
		s += a;
		a *= x * x / (i + 1);
		++i;
	}
	return s;
}

// Exercise 14/20
double funcVal14(double x, double e, int &i) {
	i = 0;
	int sign = 1;
	double a = 1, s = 0;
	while(e <= a) {
		s += sign * a;
		a *= x * x / ((2 * i + 1) * (2 * i + 2));
		sign = -sign;
		++i;
	}
	return s;
}

// Exercise 15/20
double funcVal15(double x, double e, int &i) {
	i = 0;
	int sign = 1;
	double a = 1, s = 0;
	while(e <= a) {
		s += sign * a;
		a *= x * x / ((2 * i + 2) * (2 * i + 3));
		sign = -sign;
		++i;
	}
	return s;
}

// Exercise 16/20
double funcVal16(double x, double e, int &i) {
	i = 0;
	int sign = -1;
	double a = x / 2, s = 0;
	while(e <= fabs(a)) {
		++i;
		s += sign * a;
		a *= x * x / ((2 * i + 1) * (2 * i + 2));
		sign = -sign;
	}
	return s;
}

// Exercise 17/20
double funcVal17(double x, double e, int &i) {
	i = 0;
	x = (x - 1) / (x + 1);
	double a = e, s = 0, y = x;
	while(e <= a) {
		a = 2 * y / (2 * i + 1);
		s += a;
		y *= x * x;
		++i;
	}
	return s;
}

// Exercise 18/20
double funcVal18(double x, double e, int &i) {
	i = 0;
	double a = e, s = 0, y = 1;
	while(e <= a) {
		++i;
		y *= (x - 1) / x;
		a = y / i;
		s += a;
	}
	return s;
}

// Exercise 19/20
double funcVal19(double x, double e, int &i) {
	i = 0;
	int sign = 1;
	double a = e, s = 0, y = 1;
	while(e <= a) {
		++i;
		y *= (x - 1);
		a = y / i;
		s += sign * a;
		sign = -sign;
	}
	return s;
}

// Exercise 20/20
double funcVal20(double x, double e, int &i) {
	i = 1;
	double a = e, s = 0, y = x, z = 1;
	while(e <= a) {
		a = y / (z * (2 * i - 1));
		s += a;
		y *= x * x;
		++i;
		z *= (2 * i - 2);
	}
	s = 3.14159265 / 2 - s;
	return s;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 5, IV\n\n";

	const int exNum = 20;
	int mode;
	string exerHead = "Calculating function value with given precision";
	//typedef double (*funcValP)(int);
	double (*funcVal[])(double, double, int&) = {funcVal01, funcVal02, funcVal03, funcVal04, funcVal05, funcVal06, funcVal07, funcVal08, funcVal09, 
	funcVal10, funcVal11, funcVal12, funcVal13, funcVal14, funcVal15, funcVal16, funcVal17, funcVal18, funcVal19, funcVal20};

	do{
		cout << "\n\n\tPlease choise the number from 0 to " << exNum << endl;
		cout << "\n\t\t0 \t- Exit\n";

		for(int i = 1; i <= exNum; i++) {
			cout << "\t\t" << i << " \t- " << exerHead << " " << i << endl;
		}

		cout << setprecision(3) << fixed;
		cout << "\t";

		cin >> mode;

		if(mode > 0 && mode <= exNum) {
			cout << "\n\t" << exerHead << " " << mode << "/" << exNum << endl;
			int i = 0, n = 0;
			double a, b, h = 0.1, x, e = 0.0001, f = 0;
			cout << "\n\tEnter the start point \"a\" = ";
			cin >> a;
			cout << "\n\tEnter the end point \"b\" = ";
			cin >> b;
			//cout << "\n\tEnter the accuracy \"e\" = ";
			//cin >> e;
			cout << "\n\tResult:\n\n";
			x = ((a < b) ? a : b);
			b = ((a > b) ? a : b);
			h = ((h > 0) ? h : -h);
			cout << "\ti:\tx:\tF(x):\tn:\n";
			for(; x <= b; x += h) {
				f = funcVal[mode - 1](x, e, n);
				cout << "\t" << ++i << "\t" << x << "\t" << f << "\t" << n << "\n";
			}
			string pause;
			//------------------------END-------------------------
			cout << "\n\t-------------END------------- \n";
			do{
				cout << "\n\tPlease enter \"0\" for continue\n";
				cin >> pause;
			}
			while(pause != "0");
		}
	
	} while(mode);
	
	return 0;
}