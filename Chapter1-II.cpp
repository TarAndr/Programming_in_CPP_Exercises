// Chapter 1, II

// Algebra - Geometry

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Exercise 1/20
// Calculating the perimeter of a square from its area
double squarePerFromArea(double s) {
	return ((s > 0) ? 4 * sqrt(s) : 0);
}

// Exercise 2/20
// Calculating the area of an equilateral triangle along its perimeter
double triangleAreaAlongPer(double p) {
	return ((p > 0) ? (sqrt(3) / 4) * pow(p / 3, 2) : 0);
}

// Exercise 3/20
// Calculating the distance between points with coordinates (a; b) and (c; d)
double distanceBetweenPoints(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Exercise 4/20
// Calculating the average of two number cubes
double numCubesAver(double a, double b) {
	return (pow(a, 3) + pow(b, 3)) / 2;
}

// Exercise 5/20
// Calculating the geometrical average of two number modules
double numAbsGeAver(double a, double b) {
	return sqrt(fabs(a) * fabs(b));
}

// Exercise 6/20
// Calculation of the hypotenuse of a right triangle given two legs
double hypoByLegs(double a, double b) {
	return ((a > 0 && b > 0) ? sqrt(pow(a, 2) + pow(b, 2)) : 0);
}

// Exercise 7/20
// Calculating the area of a right triangle from two legs
double rightTriAreaByLegs(double a, double b) {
	return ((a > 0 && b > 0) ? a * b / 2 : 0);
}

// Exercise 8/20
// Calculating the perimeter of a right triangle from two legs
double rightTriPerByLegs(double a, double b) {
	return ((a > 0 && b > 0) ? a + b + hypoByLegs(a, b) : 0);
}

// Exercise 9/20
// Calculating the Edge of a Cube from the Total Surface Area
double cubeEdgeFromArea(double s) {
	return ((s > 0) ? sqrt(s / 6) : 0);
}

// Exercise 10/20
// Calculating the edge of a cube from its volume
double cubeEdgeFromVolume(double v) {
	return ((v > 0) ? pow(v, 1.0 / 3) : 0);
}

// Exercise 11/20
// Calculating the triangle perimeter by the points
double trianglePerimeterByPoints(double x1, double y1, double x2, double y2, double x3, double y3) {
	return distanceBetweenPoints(x1, y1, x2, y2) + distanceBetweenPoints(x1, y1, x3, y3) + distanceBetweenPoints(x2, y2, x3, y3);
}

// Exercise 12/20
// Calculating the triangle area by the points
double triangleAreaByPoints(double x1, double y1, double x2, double y2, double x3, double y3) {
	double a = distanceBetweenPoints(x1, y1, x2, y2);
	double b = distanceBetweenPoints(x1, y1, x3, y3);
	double c = distanceBetweenPoints(x2, y2, x3, y3);
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

// Exercise 13/20
// Calculating the radius by length
double radiusByLength(double l) {
	return ((l > 0) ? l / (2 * acos(-1)) : 0);
}

// Exercise 14/20
// Calculating the radius by area
double radiusByArea(double s) {
	return ((s > 0) ? sqrt(s / acos(-1)) : 0);
}

// Exercise 15/20
// Calculating the trapecia area from a, b and angle
double trapAreaByAngle(double a, double b, double alpha) {
	if(!alpha || a <= 0 || b <= 0 || alpha >= 90) {
		return 0;
	} else if(a > b) {
		double temp = b;
		b = a;
		a = temp;
	}
	return (pow(b, 2) - pow(a, 2)) * tan(alpha * acos(-1) / 180) / 4;
}

// Exercise 16/20
// Calculating the ring area by r and R
double ringAreaByRadiuses(double r, double R) {
	if(r <= 0 || R <= 0 || r == R) {
		return 0;
	} else if(r > R) {
		double temp = R;
		R = r;
		r = temp;
	}
	return acos(-1) * (pow(R, 2) - pow(r, 2));
}

// Exercise 17/20
// Calculating circle radius in triangle by his side
double circleRadiusInTriangle(double a) {
	return ((a > 0) ? a * tan(30 * acos(-1) / 180) / 2 : 0);
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
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 1, II\n" << endl;
	
	int precision, mode;
	double a, b, c, d, e, f, res;
	string str1 = " Calculating the perimeter of a square from its area";
	string str2 = " Calculating the area of an equilateral triangle along its perimeter";
	string str3 = " Calculating the distance between points with coordinates (a; b) and (c; d)";
	string str4 = " Calculating the average of two number cubes";
	string str5 = " Calculating the geometrical average of two number modules";
	string str6 = " Calculation of the hypotenuse of a right triangle given two legs";
	string str7 = " Calculating the area of a right triangle from two legs";
	string str8 = " Calculating the perimeter of a right triangle from two legs";
	string str9 = " Calculating the Edge of a Cube from the Total Surface Area";
	string str10 = " Calculating the edge of a cube from its volume";
	string str11 = " Calculating the triangle perimeter by the points";
	string str12 = " Calculating the triangle area by the points";
	string str13 = " Calculating the radius by length";
	string str14 = " Calculating the radius by area";
	string str15 = " Calculating the trapecia area from a, b and angle";
	string str16 = " Calculating the ring area by r and R";
	string str17 = " Calculating circle radius in triangle by his side";
	string str18 = " Calculating circle radius out of triangle by his side";
	string str19 = " Calculating sum of arithmetical progresial";
	string str20 = " Calculating sum of geometrical progresial";
	
	cout << "\n\tPlease input the result precision\n" << endl;
	
	cin >> precision;
	
	cout << setprecision(precision) << fixed;
	
	do{
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
				cout << " Please input the square area \"S\"" << endl;
				
				cin >> a;
				
				res = squarePerFromArea(a);
				
				cout << " Result: square perimeter = " << res << endl;
			break;
				
			case 2:
				// Exercise 2/20
				cout << "\n\n\tExercise 2/20" << endl;
				cout << str2 << endl;
				cout << " Please input the triangle perimeter \"P\"" << endl;
				
				cin >> a;

				res = triangleAreaAlongPer(a);
				
				cout << " Result: triangle area = " << res << endl;
			break;
			
			case 3:
				// Exercise 3/20
				cout << "\n\n\tExercise 3/20" << endl;
				cout << str3 << endl;
				cout << " Please input points coordinates \"a\", \"b\", \"c\", \"d\"" << endl;
			
				cin >> a >> b >> c >> d;
			
				res = distanceBetweenPoints(a, b, c, d);
			
				cout << " Result: distance between points = " << res << endl;
			break;
			
			case 4:
				// Exercise 4/20
				cout << "\n\n\tExercise 4/20" << endl;
				cout << str4 << endl;
				cout << " Please input numbers \"a\", \"b\"" << endl;
			
				cin >> a >> b;
			
				res = numCubesAver(a, b);
			
				cout << " Result: numbers cubs average = " << res << endl;
			break;
			
			case 5:
				// Exercise 5/20
				cout << "\n\n\tExercise 5/20" << endl;
				cout << str5 << endl;
				cout << " Please input numbers \"a\", \"b\"" << endl;
			
				cin >> a >> b;
			
				res = numAbsGeAver(a, b);
			
				cout << " Result: numbers cubs average = " << res << endl;
			break;
			
			case 6:
				// Exercise 6/20
				cout << "\n\n\tExercise 6/20" << endl;
				cout << str6 << endl;
				cout << " Please enter leg lengths \"a\", \"b\"" << endl;
			
				cin >> a >> b;
			
				res = hypoByLegs(a, b);
			
				cout << " Result: hypotenuse length = " << res << endl;
			break;
			
			case 7:
				// Exercise 7/20
				cout << "\n\n\tExercise 7/20" << endl;
				cout << str7 << endl;
				cout << " Please enter leg lengths \"a\", \"b\"" << endl;
			
				cin >> a >> b;
			
				res = rightTriAreaByLegs(a, b);
			
				cout << " Result: area of the right triangle = " << res << endl;
			break;
			
			case 8:
				// Exercise 8/20
				cout << "\n\n\tExercise 8/20" << endl;
				cout << str8 << endl;
				cout << " Please enter leg lengths \"a\", \"b\"" << endl;
			
				cin >> a >> b;
			
				res = rightTriPerByLegs(a, b);
			
				cout << " Result: perimeter of the right triangle = " << res << endl;
			break;
			
			case 9:
				// Exercise 9/20
				cout << "\n\n\tExercise 9/20" << endl;
				cout << str9 << endl;
				cout << " Please enter the Cube Surface Area \"S\"" << endl;
			
				cin >> a;
			
				res = cubeEdgeFromArea(a);
			
				cout << " Result: Edge of the Cube = " << res << endl;
			break;
			
			case 10:
				// Exercise 10/20
				cout << "\n\n\tExercise 10/20" << endl;
				cout << str10 << endl;
				cout << " Please enter the Cube Volume \"V\"" << endl;
			
				cin >> a;
			
				res = cubeEdgeFromVolume(a);
			
				cout << " Result: Edge of the Cube = " << res << endl;
			break;
			
			case 11:
				// Exercise 11/20
				cout << "\n\n\tExercise 11/20" << endl;
				cout << str11 << endl;
				cout << " Please input points coordinates \"x1\", \"y1\", \"x2\", \"y2\", \"x3\", \"y3\"" << endl;
				
				cin >> a >> b >> c >> d >> e >> f;
			
				res = trianglePerimeterByPoints(a, b, c, d, e, f);
			
				cout << " Result: triangle perimeter = " << res << endl;
			break;

			case 12:
				// Exercise 12/20
				cout << "\n\n\tExercise 12/20" << endl;
				cout << str12 << endl;
				cout << " Please input points coordinates \"x1\", \"y1\", \"x2\", \"y2\", \"x3\", \"y3\"" << endl;
				
				cin >> a >> b >> c >> d >> e >> f;
			
				res = triangleAreaByPoints(a, b, c, d, e, f);
			
				cout << " Result: triangle area = " << res << endl;
			break;

			case 13:
				// Exercise 13/20
				cout << "\n\n\tExercise 13/20" << endl;
				cout << str13 << endl;
				cout << " Please input the length" << endl;
				
				cin >> a;
			
				res = radiusByLength(a);
			
				cout << " Result: radius = " << res << endl;
			break;

			case 14:
				// Exercise 14/20
				cout << "\n\n\tExercise 14/20" << endl;
				cout << str14 << endl;
				cout << " Please input the area" << endl;
				
				cin >> a;
			
				res = radiusByArea(a);
			
				cout << " Result: radius = " << res << endl;
			break;

			case 15:
				// Exercise 15/20
				cout << "\n\n\tExercise 15/20" << endl;
				cout << str15 << endl;
				cout << " Please input the \"a\", \"b\" and \"alpha\"" << endl;
				
				cin >> a >> b >> c;
			
				res = trapAreaByAngle(a, b, c);
			
				cout << " Result: trapecia area = " << res << endl;
			break;

			case 16:
				// Exercise 16/20
				cout << "\n\n\tExercise 16/20" << endl;
				cout << str16 << endl;
				cout << " Please input the \"r\" and \"R\"" << endl;
				
				cin >> a >> b;
			
				res = ringAreaByRadiuses(a, b);
			
				cout << " Result: ring area = " << res << endl;
			break;

			case 17:
				// Exercise 17/20
				cout << "\n\n\tExercise 17/20" << endl;
				cout << str17 << endl;
				cout << " Please input triangle side " << endl;
				
				cin >> a;
			
				res = circleRadiusInTriangle(a);
			
				cout << " Result: circle radius = " << res << endl;
			break;

			case 18:
				// Exercise 18/20
				cout << "\n\n\tExercise 18/20" << endl;
				cout << str18 << endl;
				cout << " Please input triangle side " << endl;
				
				cin >> a;
			
				res = circleRadiusOutTriangle(a);
			
				cout << " Result: circle radius = " << res << endl;
			break;

			case 19:
				// Exercise 19/20
				cout << "\n\n\tExercise 19/20" << endl;
				cout << str19 << endl;
				cout << " Please input the first number \"a1\", difference \"d\" and number \"n\" " << endl;
				
				cin >> a >> b >> c;
			
				res = sumOFarithmProg(a, b, c);
			
				cout << " Result: sum = " << res << endl;
			break;

			case 20:
				// Exercise 20/20
				cout << "\n\n\tExercise 20/20" << endl;
				cout << str20 << endl;
				cout << " Please input the first number \"b1\", denominator \"q\" and number \"n\" " << endl;
				
				cin >> a >> b >> c;
			
				res = sumOFgeomProg(a, b, c);
			
				cout << " Result: sum = " << res << endl;
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