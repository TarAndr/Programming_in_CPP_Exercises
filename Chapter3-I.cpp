// Programming on C++
// Exercises
// Chapter 3, I
// Operators, Shapes

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Exercise 1/20
int shape01(double x, double y) {
	if(y > 0 && x * x + y * y < 9) return 1;
	if(y < 0 || x * x + y * y > 9) return 0;
	return 2;
}

// Exercise 2/20
int shape02(double x, double y) {
	if(x > 0 && x * x + y * y < 81) return 1;
	if(x < 0 || x * x + y * y > 81) return 0;
	return 2;
}

// Exercise 3/20
int shape03(double x, double y) {
	if(y > 0 && x * x + y * y < 100 && x * x + y * y > 25) return 1;
	if(y < 0 || x * x + y * y > 100 || x * x + y * y < 25) return 0;
	return 2;
}

// Exercise 4/20
int shape04(double x, double y) {
	if(x < 0 && x * x + y * y < 64 && x * x + y * y > 9) return 1;
	if(x > 0 || x * x + y * y > 64 || x * x + y * y < 9) return 0;
	return 2;
}

// Exercise 5/20
int shape05(double x, double y) {
	if(x * x + y * y < 49 && x * x + y * y > 9) return 1;
	if(x * x + y * y > 49 || x * x + y * y < 9) return 0;
	return 2;
}

// Exercise 6/20
int shape06(double x, double y) {
	if(x * x + y * y < 625 && x * x + y * y > 225) return 0;
	if(x * x + y * y > 625 || x * x + y * y < 225) return 1;
	return 2;
}

// Exercise 7/20
int shape07(double x, double y) {
	if(x * x + y * y < 225 && y > fabs(x)) return 1;
	if(x * x + y * y > 225 || y < fabs(x)) return 0;
	return 2;
}

// Exercise 8/20
int shape08(double x, double y) {
	if(x * x + y * y < 625 && y < -fabs(x)) return 1;
	if(x * x + y * y > 625 || y > -fabs(x)) return 0;
	return 2;
}

// Exercise 9/20
int shape09(double x, double y) {
	if(y < 12 && y > fabs(x)) return 1;
	if(y > 12 || y < fabs(x)) return 0;
	return 2;
}

// Exercise 10/20
int shape10(double x, double y) {
	if(y > -100 && y < -fabs(x)) return 1;
	if(y < -100 || y > -fabs(x)) return 0;
	return 2;
}

// Exercise 11/20
int shape11(double x, double y) {
	if(fabs(x) < 50 && fabs(y) < 25) return 1;
	if(fabs(x) > 50 || fabs(y) > 25) return 0;
	return 2;
}

// Exercise 12/20
int shape12(double x, double y) {
	if(fabs(x) < 40 && fabs(y) < 40) return 0;
	if(fabs(x) > 40 || fabs(y) > 40) return 1;
	return 2;
}

// Exercise 13/20
int shape13(double x, double y) {
	if(x > 0 && y > 0 && x < 70 && y < x) return 1;
	if(x < 0 || y < 0 || x > 70 || y > x) return 0;
	return 2;
}

// Exercise 14/20
int shape14(double x, double y) {
	if(x > -23 && y < 0 && x < 0 && y > x) return 1;
	if(x < -23 || y > 0 || x > 0 || y < x) return 0;
	return 2;
}

// Exercise 15/20
int shape15(double x, double y) {
	if(x * x + y * y < 100 && y > -x) return 1;
	if(x * x + y * y > 100 || y < -x) return 0;
	return 2;
}

// Exercise 16/20
int shape16(double x, double y) {
	if(x * x + y * y < 144 && y < x) return 1;
	if(x * x + y * y > 144 || y > x) return 0;
	return 2;
}

// Exercise 17/20
int shape17(double x, double y) {
	if(x > -15 && x < 0 && y > -15 && y < 0) return 0;
	if(x < -15 || x > 0 || y < -15 || y > 0) return 1;
	return 2;
}

// Exercise 18/20
int shape18(double x, double y) {
	if(x > 0 && x < 10 && y > 0 && y < 5) return 1;
	if(x < 0 || x > 10 || y < 0 || y > 5) return 0;
	return 2;
}

// Exercise 19/20
int shape19(double x, double y) {
	if(y > fabs(x) || x * x + y * y > 100) return 0;
	if(y < fabs(x) && x * x + y * y < 100) return 1;
	return 2;
}

// Exercise 20/20
int shape20(double x, double y) {
	if(x > 0 || y < 0 || y > 23 || y < -x) return 0;
	if(x < 0 && y > 0 && y < 23 && y > -x) return 1;
	return 2;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 3, I\n" << endl;
	
	int mode, res;
	double x, y;
	
	do{
	
		//cout << setprecision(precision) << fixed;
		cout << "\n\n\tPlease choise the number from 0 to 20" << endl;
		cout << "\t\t0 \t- Exit" << endl;
		
		for(int i = 1; i < 21; i++) {
			cout << "\t\t" << i << " \t- Exercise " << i << endl;
		}

		cout << "\t";

		cin >> mode;
		
		if(mode > 0 && mode < 21) {
			cout << "\t Input point coordinates \"x\" and \"y\"" << endl;
		
			cin >> x >> y;
		}
		
		switch(mode) {
			
			case 1:
				// Exercise 1/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape01(x, y);
				
			break;
			
			case 2:
				// Exercise 2/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape02(x, y);
				
			break;

			case 3:
				// Exercise 3/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape03(x, y);
				
			break;

			case 4:
				// Exercise 4/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape04(x, y);
				
			break;
			
			case 5:
				// Exercise 5/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape05(x, y);
				
			break;

			case 6:
				// Exercise 6/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape06(x, y);
				
			break;

			case 7:
				// Exercise 7/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape07(x, y);
				
			break;

			case 8:
				// Exercise 8/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape08(x, y);
				
			break;

			case 9:
				// Exercise 9/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape09(x, y);
				
			break;

			case 10:
				// Exercise 10/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape10(x, y);
				
			break;

			case 11:
				// Exercise 11/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape11(x, y);
				
			break;
			
			case 12:
				// Exercise 12/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape12(x, y);
				
			break;
			
			case 13:
				// Exercise 13/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape13(x, y);
				
			break;
			
			case 14:
				// Exercise 14/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape14(x, y);
				
			break;
			
			case 15:
				// Exercise 15/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape15(x, y);
				
			break;
			
			case 16:
				// Exercise 16/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape16(x, y);
				
			break;
			
			case 17:
				// Exercise 17/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape17(x, y);
				
			break;
			
			case 18:
				// Exercise 18/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape18(x, y);
				
			break;

			case 19:
				// Exercise 19/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape19(x, y);
				
			break;

			case 20:
				// Exercise 20/20
				cout << "\n\tExercise " << mode << "/20" << endl;

				res = shape20(x, y);
				
			break;
						
			default:
			cout << "\tFinished" << endl;
		}
	
		if(mode > 0 && mode < 21) {
			string pause;
			cout << " Point with coordinates x = " << x << " and y = " << y << " is ";
			cout << ((res == 0) ? "out of" : ((res == 1) ? "in the" : "on the border of"));
			cout << " area" << endl;
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