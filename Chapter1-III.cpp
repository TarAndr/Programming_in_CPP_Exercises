// Chapter 1, III

// Logic

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Exercise 1/20
// Maximum value of two numbers
double maxVal(double a, double b) {
	return ((a > b) ? a : b);
}

// Exercise 2/20
// Is even number
bool isEven(int n) {
	return !(n % 2);
}

// Exercise 3/20
// Is odd number

// Exercise 4/20
// Integral division of the number M by the number N
bool intDiv(int a, int b) {
	return !(a % b);
}

// Exercise 5/20
// Checking the last digit of a number for 7
bool lastDigIs7(int a) {
	return a % 10 == 7;
}

// Exercise 6/20
// Checking the equation "ax^2 + bx + c = 0" for real roots
double hasEquRealRoots(double a, double b, double c) {
	return (pow(b, 2) - 4 * a * c >= 0) && !(a == 0 && b == 0 && c != 0);
}

// Exercise 7/20
// Compare digits of number
int cmpDigOFnum(int a) {
	a = abs(a);
	if(a < 10 || a > 99) {
		return -1;
	} else
	if(a / 10 == a % 10) {
		return 0;
	}
	return ((a / 10 > a % 10) ? 1 : 2);
}

// Exercise 8/20
// Compare digits of number

// Exercise 9/20
// Is the sum of number digits even or odd
bool isEvenSumOFdigits(int a) {
	a = abs(a);
	return !((a / 10 + (a % 10)) % 2);
}

// Exercise 10/20
// Is the sum of number digits even or odd

// Exercise 11/20
// Checking the multiplicity of "A" of the sum of the digits of a two-digit number
bool isMultSumOFdigits(int a, int A) {
	a = abs(a);
	return !((a / 10 + (a % 10)) % A);
}

// Exercise 12/20
// Checking the multiplicity of "A" of the sum of the digits of a two-digit number

// Exercise 13/20
// Determining the largest digit of a three-digit number
int larDigOFnum3(int a) {
	a = abs(a);
	int b = (a / 10) % 10;
	int c = a % 10;
	a /= 100;
	if(a > b && a > c) {
		return 1;
	}else
	if(b > a && b > c) {
		return 2;
	}else
	if(c > a && c > b) {
		return 3;	
	}else
	if(a == b && a == c) {
		return 0;
	}else{
		return -1;
	}
}

// Exercise 14/20
// Determining the largest digit of a three-digit number

// Exercise 15/20
// Determining the largest digit of a three-digit number

// Exercise 16/20
// Determining the largest digit of a three-digit number

// Exercise 17/20
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

// Exercise 18/20
// Calculating circle radius out of triangle by his side
double circleRadiusOutTriangle(double a) {
	return ((a > 0) ? a / (2 * cos(30 * acos(-1) / 180)) : 0);
}

// Exercise 19/20
// Calculating sum of arithmetical progresial
double sumOFarithmProg(double a1, double d, int n) {
	return ((n > 0) ? (2 * a1 + (n - 1) * d) * n / 2 : 0);
}

// Exercise 20/20
// Calculating sum of geometrical progresial
double sumOFgeomProg(double b1, double q, int n) {
	return ((q != 0 && n > 0) ? ((q != 1) ? (b1 * (1 - pow(q, n))) / (1 - q) : b1 * n) : 0);
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 1, III\n" << endl;
	
	int precision, mode, i;
	double a, b, c, d, e, f, res;
	string str1 = " Maximum value of two numbers";
	string str2 = " Is number even?";
	string str3 = " Is number odd?";
	string str4 = " Integral division of the number M by the number N";
	string str5 = " Checking the last digit of a number for 7";
	string str6 = " Checking the equation \"ax^2 + bx + c = 0\" for real roots";
	string str7 = " Compare digits of number";
	string str8 = " Compare digits of number";
	string str9 = " Is the sum of number digits even or odd";
	string str10 = " Is the sum of number digits even or odd";
	string str11 = " Checking the multiplicity of three of the sum of the digits of a two-digit number";
	string str12 = " Checking the multiplicity of \"A\" of the sum of the digits of a two-digit number";
	string str13 = " Determining the largest digit of a three-digit number";
	string str14 = " Determining the largest digit of a three-digit number";
	string str15 = " Determining the largest digit of a three-digit number";
	string str16 = " Determining the largest digit of a three-digit number";
	string str17 = " Triangle Type Definition";
	string str18 = " Triangle Type Definition";
	string str19 = " Triangle Type Definition";
	string str20 = " Triangle Type Definition";
	
	cout << "\n\tPlease input the result precision\n" << endl;
	
	cin >> precision;
	
	do{
	
		cout << setprecision(precision) << fixed;
		cout << "\n\n\tPlease choise the number from 0 to 20" << endl;
		cout << " 0 - Exit" << endl;
		cout << " 1 -" << str1 << endl;
		cout << " 2 -" << str2 << endl;
		cout << " 3 -" << str3 << endl;
		cout << " 4 -" << str4 << endl;
		cout << " 5 -" << str5 << endl;
		cout << " 6 -" << str6 << endl;
		cout << " 7 -" << str7 << endl;
		cout << " 8 -" << str8 << endl;
		cout << " 9 -" << str9 << endl;
		cout << " 10 -" << str10 << endl;
		cout << " 11 -" << str11 << endl;
		cout << " 12 -" << str12 << endl;
		cout << " 13 -" << str13 << endl;
		cout << " 14 -" << str14 << endl;
		cout << " 15 -" << str15 << endl;
		cout << " 16 -" << str16 << endl;
		cout << " 17 -" << str17 << endl;
		cout << " 18 -" << str18 << endl;
		cout << " 19 -" << str19 << endl;
		cout << " 20 -" << str20 << endl;
		
		cin >> mode;
		
		switch(mode) {
			
			case 1:
				// Exercise 1/20
				cout << "\n\n\tExercise 1/20" << endl;
				cout << str1 << endl;
				cout << " Please input number \"a\" and number \"b\"" << endl;
				
				cin >> a >> b;
				
				res = maxVal(a, b);
				
				cout << " Result: max value = " << res << endl;
			break;
				
			case 2:
				// Exercise 2/20
				cout << "\n\n\tExercise 2/20" << endl;
				cout << str2 << endl;
				cout << " Please input the number" << endl;
				
				cin >> a;
				
				cout << " Result: number is " << (isEven(a) ? "even" : "odd") << endl;
			break;
			
			case 3:
				// Exercise 3/20
				cout << "\n\n\tExercise 3/20" << endl;
				cout << str3 << endl;
				cout << " Please input the number" << endl;
				
				cin >> a;
				
				cout << " Result: number is " << (isEven(a) ? "even" : "odd") << endl;
			break;
			
			case 4:
				// Exercise 4/20
				cout << "\n\n\tExercise 4/20" << endl;
				cout << str4 << endl;
				cout << " Please input numbers \"M\" and \"N\"" << endl;
			
				cin >> a >> b;
			
				cout << " Result: ";
				
				if(intDiv(a, b)) {
					cout << setprecision(0);
					cout << "M / N = " << a / b << endl;
				} else{
					cout << "M is not divisible by N" << endl;
				}
			break;
			
			case 5:
				// Exercise 5/20
				cout << "\n\n\tExercise 5/20" << endl;
				cout << str5 << endl;
				cout << " Please input the number" << endl;
			
				cin >> a;
				
				if(lastDigIs7(a)) {
					cout << "The number ends with the \"7\"" << endl;
				} else{
					cout << "Number does not end with \"7\"" << endl;
				}
			
			break;
			
			case 6:
				// Exercise 6/20
				cout << "\n\n\tExercise 6/20" << endl;
				cout << str6 << endl;
				cout << " Please enter equation coefficients \"a\", \"b\" and \"c\"" << endl;
			
				cin >> a >> b >> c;
				
				cout << "The equation has " << (hasEquRealRoots(a, b, c) ? "" : "not ") << "real roots" << endl;
				
			break;
			
			case 7:
				// Exercise 7/20
				cout << "\n\n\tExercise 7/20" << endl;
				cout << str7 << endl;
				cout << " Please input the two digits number" << endl;
			
				cin >> a;
			
				i = cmpDigOFnum(a);
				
				if(i < 0) {
					cout << "Exception !" << endl;
				} else{
				cout << " Result: the first digit of number ";
				
				cout << ((i > 0) ? ((i > 1) ? "<" : ">") : "=");
				
				cout << " the second digit of number" << endl;
				}
			break;
			
			case 8:
				// Exercise 8/20
				cout << "\n\n\tExercise 8/20" << endl;
				cout << str8 << endl;
				cout << " Please input the two digits number" << endl;
			
				cin >> a;
			
				i = cmpDigOFnum(a);
				
				if(i < 0) {
					cout << "Exception !" << endl;
				} else{
				cout << " Result: the first digit of number ";
				
				cout << ((i > 0) ? ((i > 1) ? "<" : ">") : "=");
				
				cout << " the second digit of number" << endl;
				}
			break;
			
			case 9:
				// Exercise 9/20
				cout << "\n\n\tExercise 9/20" << endl;
				cout << str9 << endl;
				cout << " Please input the two digits number" << endl;
			
				cin >> a;
			
				cout << "The sum of number digits is ";
				cout << ((isEvenSumOFdigits(a)) ? "even" : "odd") << endl;			
			break;
			
			case 10:
				// Exercise 10/20
				cout << "\n\n\tExercise 10/20" << endl;
				cout << str10 << endl;
				cout << " Please input the two digits number" << endl;
			
				cin >> a;
			
				cout << "The sum of number digits is ";
				cout << ((isEvenSumOFdigits(a)) ? "even" : "odd") << endl;
			break;
			
			case 11:
				// Exercise 11/20
				cout << "\n\n\tExercise 11/20" << endl;
				cout << str11 << endl;
				cout << " Please input the two-digit number" << endl;
			
				cin >> a;
			
				cout << "The sum of the digits is ";
				cout << ((isMultSumOFdigits(a, 3)) ? "" : "not ");
				cout << "divisible by 3" << endl;
			break;

			case 12:
				// Exercise 12/20
				cout << "\n\n\tExercise 12/20" << endl;
				cout << str12 << endl;
				cout << " Please input the two-digit number and divider" << endl;
			
				cin >> a >> b;
			
				cout << "The sum of the digits is ";
				cout << ((isMultSumOFdigits(a, b)) ? "" : "not ");
				cout << "divisible by " << setprecision(0) << b << endl;
			break;

			case 13:
				// Exercise 13/20
				cout << "\n\n\tExercise 13/20" << endl;
				cout << str13 << endl;
				cout << " Please enter a three-digit number" << endl;
				
				cin >> a;
			
				i = larDigOFnum3(a);
				
				if(!i) {
					cout << " All digits of a three-digit number are the same" << endl;
					break;
				}else
				if(i == 1) {
					cout << " The first ";
				}else
				if(i == 2) {
					cout << " The second ";
				}else
				if(i == 3) {
					cout << " The third ";
				}else{
					cout << " Cannot find ";
				}
			
				cout << "digit of a three-digit number is the largest" << endl;
			break;

			case 14:
				// Exercise 14/20
				cout << "\n\n\tExercise 14/20" << endl;
				cout << str14 << endl;
				cout << " Please enter a three-digit number" << endl;
				
				cin >> a;
			
				i = larDigOFnum3(a);
				
				if(!i) {
					cout << " All digits of a three-digit number are the same" << endl;
					break;
				}else
				if(i == 1) {
					cout << " The first ";
				}else
				if(i == 2) {
					cout << " The second ";
				}else
				if(i == 3) {
					cout << " The third ";
				}else{
					cout << " Cannot find ";
				}
			
				cout << "digit of a three-digit number is the largest" << endl;
			break;

			case 15:
				// Exercise 15/20
				cout << "\n\n\tExercise 15/20" << endl;
				cout << str15 << endl;
				cout << " Please enter a three-digit number" << endl;
				
				cin >> a;
			
				i = larDigOFnum3(a);
				
				if(!i) {
					cout << " All digits of a three-digit number are the same" << endl;
					break;
				}else
				if(i == 1) {
					cout << " The first ";
				}else
				if(i == 2) {
					cout << " The second ";
				}else
				if(i == 3) {
					cout << " The third ";
				}else{
					cout << " Cannot find ";
				}
			
				cout << "digit of a three-digit number is the largest" << endl;
			break;

			case 16:
				// Exercise 16/20
				cout << "\n\n\tExercise 16/20" << endl;
				cout << str16 << endl;
				cout << " Please enter a three-digit number" << endl;
				
				cin >> a;
			
				i = larDigOFnum3(a);
				
				if(!i) {
					cout << " All digits of a three-digit number are the same" << endl;
					break;
				}else
				if(i == 1) {
					cout << " The first ";
				}else
				if(i == 2) {
					cout << " The second ";
				}else
				if(i == 3) {
					cout << " The third ";
				}else{
					cout << " Cannot find ";
				}
			
				cout << "digit of a three-digit number is the largest" << endl;
			break;

			case 17:
				// Exercise 17/20
				cout << "\n\n\tExercise 17/20" << endl;
				cout << str17 << endl;
				cout << " Please enter the sides of the triangle \"a\", \"b\" and \"c\" " << endl;
				
				cin >> a >> b >> c;
			
				i = triangleTypeDef(a, b, c);
			
				cout << " Result: A triangle with these sides ";
				
				if(i < 0) {
					cout << "does not exist." << endl;
				}else if(!i) {
					cout << "is a general triangle." << endl;
				}else if(i == 1) {
					cout << "is equilateral." << endl;
				}else if(i == 2) {
					cout << "is isosceles." << endl;
				}else if(i == 3) {
					cout << "is a right triangle." << endl;
				}
			break;

			case 18:
				// Exercise 18/20
				cout << "\n\n\tExercise 18/20" << endl;
				cout << str18 << endl;
				cout << " Please enter the sides of the triangle \"a\", \"b\" and \"c\" " << endl;
				
				cin >> a >> b >> c;
			
				i = triangleTypeDef(a, b, c);
			
				cout << " Result: A triangle with these sides ";
				
				if(i < 0) {
					cout << "does not exist." << endl;
				}else if(!i) {
					cout << "is a general triangle." << endl;
				}else if(i == 1) {
					cout << "is equilateral." << endl;
				}else if(i == 2) {
					cout << "is isosceles." << endl;
				}else if(i == 3) {
					cout << "is a right triangle." << endl;
				}
			break;

			case 19:
				// Exercise 19/20
				cout << "\n\n\tExercise 19/20" << endl;
				cout << str19 << endl;
				cout << " Please enter the sides of the triangle \"a\", \"b\" and \"c\" " << endl;
				
				cin >> a >> b >> c;
			
				i = triangleTypeDef(a, b, c);
			
				cout << " Result: A triangle with these sides ";
				
				if(i < 0) {
					cout << "does not exist." << endl;
				}else if(!i) {
					cout << "is a general triangle." << endl;
				}else if(i == 1) {
					cout << "is equilateral." << endl;
				}else if(i == 2) {
					cout << "is isosceles." << endl;
				}else if(i == 3) {
					cout << "is a right triangle." << endl;
				}
			break;

			case 20:
				// Exercise 20/20
				cout << "\n\n\tExercise 20/20" << endl;
				cout << str20 << endl;
				cout << " Please enter the sides of the triangle \"a\", \"b\" and \"c\" " << endl;
				
				cin >> a >> b >> c;
			
				i = triangleTypeDef(a, b, c);
			
				cout << " Result: A triangle with these sides ";
				
				if(i < 0) {
					cout << "does not exist." << endl;
				}else if(!i) {
					cout << "is a general triangle." << endl;
				}else if(i == 1) {
					cout << "is equilateral." << endl;
				}else if(i == 2) {
					cout << "is isosceles." << endl;
				}else if(i == 3) {
					cout << "is a right triangle." << endl;
				}
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