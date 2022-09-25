// Chapter 1, II

// Algebra - Geometry

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Calculating the perimeter of a square from its area
double squarePerFromArea(double s) {
	return ((s > 0) ? 4 * sqrt(s) : 0);
}

int main() {
	cout << "\n\t\tC++ Exercises, Chapter 1, II\n" << endl;
	
	double x, y, z, res;

	// Exercise 1/20
	cout << "\n\n\tExercise 1/20" << endl;
	cout << " Calculating the perimeter of a square from its area" << endl;
	cout << " Please enter square area" << endl;
	
	cin >> x;
	
	res = squarePerFromArea(x);
	
	cout << " Result: square perimeter = " << setprecision(3) << fixed << res << endl;
	
	// Exercise 2/20
	cout << "\n\n\tExercise 2/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	res = exp(-x) - cos(x) + sin(2 * x * y);
	
	cout << " Result: f(x, y) = " << res << endl;
	
	// Exercise 3/20
	cout << "\n\n\tExercise 3/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;
	
	res = sqrt(pow(x, 4) + sqrt(fabs(x + 1)));
	
	cout << " Result: f(x) = " << res << endl;
	
	// Exercise 4/20
	cout << "\n\n\tExercise 4/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	res = (sin(x) + cos(y)) / tan(x) + 0.43;
	
	cout << " Result: f(x, y) = " << res << endl;
	
	// Exercise 5/20
	cout << "\n\n\tExercise 5/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;
	
	res = (0.125 * x + fabs(sin(x))) / (1.5 * pow(x, 2) + cos(x));
	
	cout << " Result: f(x) = " << res << endl;
	
	// Exercise 6/20
	cout << "\n\n\tExercise 6/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	res = (x + y) / (x + 1) - (x * y - 12) / (34 + x);
	
	cout << " Result: f(x, y) = " << res << endl;
	
	// Exercise 7/20
	cout << "\n\n\tExercise 7/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	res = ((sin(x) + cos(y)) / (cos(x) - sin(y))) * tan(x * y);
	
	cout << " Result: f(x, y) = " << res << endl;
	
	// Exercise 8/20
	cout << "\n\n\tExercise 8/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	res = (1 + exp(y - 1)) / (1 + pow(x, 2) * fabs(y - tan(x)));
	
	cout << " Result: f(x, y) = " << res << endl;
	
	// Exercise 9/20
	cout << "\n\n\tExercise 9/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;
	
	res = fabs(pow(x, 3) - pow(x, 2)) - 7 * x / (pow(x, 3) - 15 * x);
	
	cout << " Result: f(x) = " << res << endl;
	
	// Exercise 10/20
	cout << "\n\n\tExercise 10/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;
	
	res = 1 + x / 3 + fabs(x) + (pow(x, 3) + 4) / 2;
	
	cout << " Result: f(x) = " << res << endl;
	
	// Exercise 11/20
	cout << "\n\n\tExercise 11/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;
	
	res = log(fabs(cos(x))) / log(1 + pow(x, 2));
	
	cout << " Result: f(x) = " << res << endl;
	
	// Exercise 12/20
	cout << "\n\n\tExercise 12/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	res = (1 + sin(sqrt(x + 1))) / cos(12 * y - 4);
	
	cout << " Result: f(x, y) = " << res << endl;
	
	// Exercise 13/20
	cout << "\n\n\tExercise 13/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	res = (pow(x, 2) + pow(y, 2)) / (1 - (pow(x, 3) - y) / 3);
	
	cout << " Result: f(x, y) = " << res << endl;
	
	// Exercise 14/20
	cout << "\n\n\tExercise 14/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	res = (1 + pow(sin(x + y), 2)) / (2 + fabs(x - 2 * x / (1 + pow(x * y, 2)))) + x;
	
	cout << " Result: f(x, y) = " << res << endl;
	
	// Exercise 15/20
	cout << "\n\n\tExercise 15/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	res = x * log(x) + y / (cos(x) - x / 3);
	
	cout << " Result: f(x, y) = " << res << endl;
	
	// Exercise 16/20
	cout << "\n\n\tExercise 16/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;
	
	res = sin(sqrt(x + 1)) - sin(sqrt(x - 1));
	
	cout << " Result: f(x) = " << res << endl;
	
	// Exercise 17/20
	cout << "\n\n\tExercise 17/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	res = cos(x) / (acos(-1) - 2 * x) + 16 * x * cos(x * y);
	
	cout << " Result: f(x, y) = " << res << endl;
	
	// Exercise 18/20
	cout << "\n\n\tExercise 18/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;
	
	res = 2 * 1 / tan(3 * x) - 1 / (12 * pow(x, 2) + 7 * x - 5);
	
	cout << " Result: f(x) = " << res << endl;
	
	// Exercise 19/20
	cout << "\n\n\tExercise 19/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	cout << " Please enter number for \"z\"" << endl;
	
	cin >> z;
	
	res = (y + sqrt(pow(y, 2) + 4 * x * z)) / (2 * x) - pow(x, 3) + pow(y, -2);
	
	cout << " Result: f(x, y, z) = " << res << endl;
	
	// Exercise 20/20
	cout << "\n\n\tExercise 20/20" << endl;
	cout << " Please enter number for \"x\"" << endl;
	
	cin >> x;

	cout << " Please enter number for \"y\"" << endl;
	
	cin >> y;
	
	res = log(fabs((y - sqrt(fabs(x))) * (x - y / (x + pow(x, 2) / 4))));
	
	cout << " Result: f(x, y) = " << res << endl;
	
	//----------------------END--------------------------
	cout << "\n\n\t---------END--------- " << endl;
	cin >> x;
	return 0;
}