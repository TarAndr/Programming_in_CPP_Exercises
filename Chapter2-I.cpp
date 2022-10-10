// Programming on C++
// Exercises
// Chapter 2, I
// Functions

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Exercise 1/20
// Minimum value of two numbers
double min(double a, double b) {
	return ((a < b) ? a : b);
}

// Exercise 2/20
// Minimum value of 4 numbers

// Exercise 3/20
// Maximum value of two numbers
double max(double a, double b) {
	return ((a > b) ? a : b);
}

// Exercise 4/20
// f(x) = x^3 - sin x
double fun4(double x) {
	return pow(x, 3) - sin(x);
}

// Exercise 5/20
// f(x) = cos(2x) + sin(x - 3)
double fun5(double x) {
	return cos(2 * x) + sin(x - 3);
}

// Exercise 6/20
// Determining the least significant digit of a natural number
unsigned int leastDig(unsigned int n) {
	return n % 10;
}

// Exercise 7/20
// Determining the second digit from the right of a natural number
unsigned int secDig(unsigned int n) {
	return (n / 10) % 10;
}

// Exercise 8/20
// sqrt(n) + n
double fun8(unsigned int n) {
	return (double)sqrt(n) + n;
}

// Exercise 9/20
// pow(x, n) / n
double fun9(double x, unsigned int n) {
	return pow(x, n) / n;
}

// Exercise 10/20
// Even: x = x / 2; Odd: x = 0
int fun10(int n) {
	return ((n % 2) ? 0 : n / 2);
}

// Exercise 11/20
// /5: x = x / 5; !/5: x = x + 1
int fun11(int n) {
	return ((n % 5) ? n + 1 : n / 5);
}

// Exercise 12/20
// Swap first and last digit in two-digit number
int swapFLdig2(int a) {
	if(abs(a) < 12 || abs(a) > 98) {
		return a;
	}
	int temp = a / 10;
	a %= 10;
	a *= 10;
	return a += temp;
}

// Exercise 13/20
// Swap first and last digit in three-digit number
int swapFLdig3(int a) {
	if(abs(a) < 102 || abs(a) > 998) {
		return a;
	}
	int temp = a / 100;
	temp += ((a / 10) % 10) * 10;
	a %= 10;
	a *= 100;
	return a += temp;
}

// Exercise 14/20
// Calculating the hypotenuse from two legs
double hypoFromLegs(double a, double b) {
	return ((a > 0 && b > 0) ? sqrt(pow(a, 2) + pow(b, 2)) : 0);
}

// Exercise 15/20
// Calculating the triangle area by the legs
double triangleAreaByLegs(double a, double b, double c) {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}


// Exercise 16/20
// Calculating the distance between points with coordinates (x1; y1) and (x2; y2)
double distanceBetweenPoints(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Calculating triangle perimeter by legs
double trianglePerimeter(double a, double b, double c) {
	return a + b + c;
}

// Triangle Type Definition
int triangleTypeDef(double a, double b, double c) {
	if(a <= 0 || b <= 0 || c <= 0 || a >= b + c || b >= a + c || c >= a + b) {
		return -1;	// A triangle with such sides does not exist.
	}else if(a == b && a == c) {
		return 1;	// A triangle with these sides is equilateral
	}else if(a == b || a == c || b == c) {
		return 2;	// A triangle with these sides is isosceles
	}
	if(a > c) {
		double temp = c;
		c = a;
		a = temp;
	}
	if(b > c) {
		double temp = c;
		c = b;
		b = temp;	
	}
	if(pow(c, 2) == pow(a, 2) + pow(b, 2)) {
		return 3;	// A triangle with these sides is a right triangle
	}
	return 0;		// A triangle with such sides is a general triangle
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 2, I\n" << endl;
	
	const int exNum = 21;
	int precision, mode;
	double a, b, c, d, res;
	string exercises[exNum];
	exercises[0] = " Exit";
	exercises[1] = " z = min(3x, 2y) + min(x - y, x + y)";
	exercises[2] = " min(x, y, z, v)";
	exercises[3] = " z = max(x, 2y - x) + max(5x + 3y, y)";
	exercises[4] = " f(x) = x^3 - sin x";
	exercises[5] = " f(x) = cos(2x) + sin(x - 3)";
	exercises[6] = " f(x) = x % 10, z = f(a) + f(b)";
	exercises[7] = " f(x) = x / 10 % 10, z = f(a) + f(b) - f(c)";
	exercises[8] = " (sqrt(6) + 6 + sqrt(13) + 13 + sqrt(21) + 21) / 2";
	exercises[9] = " x^2 / 2 + x^4 / 4 + x^6 / 6";
	exercises[10] = " Even: x = x / 2; Odd: x = 0";
	exercises[11] = " /5: x = x / 5; !/5: x = x + 1";
	exercises[12] = " Swap first and last digit in two-digit number";
	exercises[13] = " Swap first and last digit in three-digit number";
	exercises[14] = " ABCD perimeter";
	exercises[15] = " Calculating the area of a pentagon";
	exercises[16] = " Calculating the triangle perimeter by the points";
	exercises[17] = " Calculating the furthest point from the origin";
	exercises[18] = " Finding two points with minimum distance";
	exercises[19] = " Checking for the existence of a triangle given points";
	exercises[20] = " Number of possible triangles given four given points";

	cout << "\n\tPlease input the result precision\n" << endl;
	
	cin >> precision;
	
	do{
	
		cout << setprecision(precision) << fixed;
		cout << "\n\n\tPlease choise the number from 0 to 20" << endl;
		
		for(int i = 0; i < exNum; i++) {
			cout << " " << i << " -" << exercises[i] << endl;
		}

		cin >> mode;
		
		switch(mode) {
			
			case 1:
				// Exercise 1/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input number \"x\" and number \"y\"" << endl;
				
				cin >> a >> b;
				
				res = min(3 * a, 2 * b) + min(a - b, a + b);
				
				cout << " Result: z = " << res << endl;
			break;
			
			case 2:
				// Exercise 2/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input numbers \"x\", \"y\", \"z\" and \"v\"" << endl;
				
				cin >> a >> b >> c >> d;
				
				res = min(min(a, b), min(c, d));
				
				cout << " Result: min num = " << res << endl;
			break;
			
			case 3:
				// Exercise 3/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input numbers \"x\" and \"y\"" << endl;
				
				cin >> a >> b;
				
				res  = max(a, 2 * b - a) + max(5 * a + 3 * b, b);
				
				cout << " Result: z = " << res << endl;
			break;
			
			case 4:
				// Exercise 4/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input points \"a\" and \"b\"" << endl;
				
				cin >> a >> b;
				
				c  = fun4(a);
				d  = fun4(b);
				
				cout << " Result: f(a) ";
				cout << ((c == d) ? "=" : ((c < d) ? "<" : ">"));
				cout << " f(b)" << endl;
			break;
			
			case 5:
				// Exercise 5/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input points \"a\" and \"b\"" << endl;
				
				cin >> a >> b;
				
				c  = fun5(a);
				d  = fun5(b);
				
				cout << " Result: f(a) ";
				cout << ((c == d) ? "=" : ((c < d) ? "<" : ">"));
				cout << " f(b)" << endl;
			break;
			
			case 6:
				// Exercise 6/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input points \"a\" and \"b\"" << endl;
				
				cin >> a >> b;
				
				res = leastDig(a) + leastDig(b);
				
				cout << setprecision(0);
				cout << " Result: z = " << res << endl;
			break;
			
			case 7:
				// Exercise 7/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input points \"a\", \"b\" and \"c\"" << endl;
				
				cin >> a >> b >> c;
				
				res = secDig(a) + secDig(b) - secDig(c);
				
				cout << setprecision(0);
				cout << " Result: z = " << res << endl;
			break;
			
			case 8:
				// Exercise 8/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				
				res = (fun8(6) + fun8(13) + fun8(21)) / 2;
				
				cout << " Result: " << res << endl;
			break;
			
			case 9:
				// Exercise 9/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input \"x\"" << endl;
				
				cin >> a;
				
				res = fun9(a, 2) + fun9(a, 4) + fun9(a, 6);
				
				cout << " Result: " << res << endl;
			break;
			
			case 10:
				// Exercise 10/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input \"n\"" << endl;
				
				cin >> a;
				
				res = fun10(a);
				
				cout << setprecision(0);
				cout << " Result: " << res << endl;
			break;
			
			case 11:
				// Exercise 11/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input \"n\"" << endl;
				
				cin >> a;
				
				res = fun11(a);
				
				cout << setprecision(0);
				cout << " Result: " << res << endl;
			break;
			
			case 12:
				// Exercise 12/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input number" << endl;
				
				cin >> a;
				
				res = swapFLdig2(a);
				
				cout << setprecision(0);
				cout << " Result: " << res << endl;
			break;
			
			case 13:
				// Exercise 13/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input number" << endl;
				
				cin >> a;
				
				res = swapFLdig3(a);
				
				cout << setprecision(0);
				cout << " Result: " << res << endl;
			break;
			
			case 14:
				// Exercise 14/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input \"AB\", \"AC\" and \"DC\"" << endl;
				
				cin >> a >> b >> c;
				
				res = a + b + c + hypoFromLegs(hypoFromLegs(a, b), c);
				
				cout << " Result: perimeter = " << res << endl;
			break;
			
			case 15:
				// Exercise 15/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input \"a\", \"b\", \"c\", \"d\", \"e\", \"f\" and \"g\"" << endl;
				
				double e, f, g;
				
				cin >> res >> a >> b >> c >> d >> e >> f;
				
				res = triangleAreaByLegs(res, a, e) + triangleAreaByLegs(b, e, f) + triangleAreaByLegs(c, d, f);
								
				cout << " Result: area = " << res << endl;
			break;
			
			case 16:
				// Exercise 16/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input \"x1\", \"y1\", \"x2\", \"y2\", \"x3\" and \"y3\"" << endl;
				
				cin >> a >> b >> c >> d >> e >> f;
				
				res = trianglePerimeter(distanceBetweenPoints(a, b, c, d), distanceBetweenPoints(c, d, e, f), distanceBetweenPoints(a, b, e, f));
								
				cout << " Result: perimeter = " << res << endl;
			break;
			
			case 17:
				// Exercise 17/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input points coordinates \"x1\", \"y1\", \"x2\", \"y2\", \"x3\" and \"y3\"" << endl;
				
				cin >> a >> b >> c >> d >> e >> f;
				
				res = max(distanceBetweenPoints(0, 0, a, b), max(distanceBetweenPoints(0, 0, c, d), distanceBetweenPoints(0, 0, e, f)));
								
				cout << " Result: maximum distance = " << res << endl;
			break;
			
			case 18:
				// Exercise 18/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input points coordinates \"x1\", \"y1\", \"x2\", \"y2\", \"x3\" and \"y3\"" << endl;
				
				cin >> a >> b >> c >> d >> e >> f;
				
				res = min(distanceBetweenPoints(a, b, c, d), min(distanceBetweenPoints(a, b, e, f), distanceBetweenPoints(c, d, e, f)));
								
				cout << " Result: minimum distance = " << res << endl;
			break;
			
			case 19:
				// Exercise 19/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input points coordinates \"x1\", \"y1\", \"x2\", \"y2\", \"x3\" and \"y3\"" << endl;
				
				cin >> a >> b >> c >> d >> e >> f;
				
				res = triangleTypeDef(distanceBetweenPoints(a, b, c, d), distanceBetweenPoints(a, b, e, f), distanceBetweenPoints(c, d, e, f));
								
				cout << " Result: Such a triangle ";
				cout << ((res == -1) ? "not ": "");
				cout << "exists" << endl;
			break;
			
			case 20:
				// Exercise 19/20
				cout << "\n\n\tExercise " << mode << "/20" << endl;
				cout << exercises[mode] << endl;
				cout << " Please input points coordinates \"x1\", \"y1\", \"x2\", \"y2\", \"x3\", \"y3\", \"x4\" and \"y4\"" << endl;
				
				double h;
				
				cin >> a >> b >> c >> d >> e >> f >> g >> h;
				
				res = 0;
				
				// ABC
				if(triangleTypeDef(distanceBetweenPoints(a, b, c, d), distanceBetweenPoints(a, b, e, f), distanceBetweenPoints(c, d, e, f)) != -1) {
					res++;
				}
				
				// ABD
				if(triangleTypeDef(distanceBetweenPoints(a, b, c, d), distanceBetweenPoints(a, b, g, h), distanceBetweenPoints(c, d, g, h)) != -1) {
					res++;
				}
				
				// ACD
				if(triangleTypeDef(distanceBetweenPoints(a, b, e, f), distanceBetweenPoints(e, f, g, h), distanceBetweenPoints(a, b, g, h)) != -1) {
					res++;
				}
				
				// BCD
				if(triangleTypeDef(distanceBetweenPoints(c, d, e, f), distanceBetweenPoints(e, f, g, h), distanceBetweenPoints(c, d, g, h)) != -1) {
					res++;
				}

				cout << setprecision(0);
				cout << " Result: number of possible triangles = " << res << endl;
			break;
			
			default:
			cout << "Finished" << endl;
		}
	
		//-------------------------END--------------------------
		cout << "\n\t--------------END-------------- " << endl;
		if(mode) {
			string pause;
			do{
				cout << "Please enter \"1\" for continue" << endl;
				cin >> pause;
			}
			while(pause != "1");
		}
	} while(mode);
	
	return 0;
}