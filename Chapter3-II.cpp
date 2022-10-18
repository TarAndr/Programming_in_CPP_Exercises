// Programming on C++
// Exercises
// Chapter 3, II
// Operators, Logic

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Exercise 1/20
string monthName(unsigned int m) {
	if(m < 1 || m > 12) {
		return "Such a month not exist";
	}
	string month[] = {
		"January", "February", "March", "April", 
		"May", "June", "July", "August", 
		"September", "October", "November", "December"
	};
	return month[m - 1];
}

// Exercise 2/20
int daysToEnd(unsigned int m, unsigned int d) {
	if(m < 1 || m > 12) {
		return -1;
	}
	unsigned int daysInMonth[] = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	return daysInMonth[m - 1] - d;
}

// Exercise 3/20
string suitName(unsigned int m) {
	if(m < 1 || m > 4) {
		return "Such a suit not exist";
	}
	string suit[] = {
		"Peak", "Trephica", "Bubne", "Cherry"
	};
	return suit[m - 1];
}

// Exercise 4/20
string cardName(unsigned int k) {
	if(k < 6 || k > 14) {
		return "Such a card not exist";
	}
	string card[] = {
		"Six", "Seven", "Eight", "Nine", "Ten",
		"Jack", "Lady", "King", "Ace"
	};
	return card[k - 6];
}

// Exercise 5/20

// Exercise 6/20
string monthName1990(unsigned int m) {
	string month[] = {
		"January", "February", "March", "April", 
		"May", "June", "July", "August", 
		"September", "October", "November", "December"
	};
	return month[m % 12];
}

// Exercise 7/20
string doctorsHours(unsigned int d) {
	if(d < 1 || d > 7) {
		return "Such a day not exist";
	}
	switch(d) {
		case 1: case 2: case 3: case 4: case 5:
		return "09:00 - 18:00";
		case 6: case 7:
		return "Day off";
	}
}

// Exercise 8/20
string testAsse(unsigned int p) {
	if(p < 0 || p > 100) {
		return "Such an assessment not exist";
	}
	if(p < 50) {
		return "Unsatisfactorily";
	}
	if(p < 69) {
		return "Satisfactorily";
	}
	if(p < 89) {
		return "Good";
	}
	return "Perfectly";
}

// Exercise 9/20
double calcTwoNum(double a, double b, char oper) {
	if(oper == '+') return a + b;
	if(oper == '-') return a - b;
	if(oper == '*') return a * b;
	if(b && (oper == ':' || oper == '/')) return a / b;
	return NAN;
}
// Exercise 10/20
string animalName(unsigned int y) {
	string animal[] = {
		"Animal 1", "Animal 2", "Animal 3", "Animal 4", 
		"Animal 5", "Animal 6", "Animal 7", "Animal 8", 
		"Animal 9", "Animal 10", "Animal 11", "Animal 12"
	};
	return animal[y % 12];
}

// Exercise 11/20
string ageCat(unsigned int p) {
	if(p < 0 || p > 222) {
		return "Such age not exist";
	}
	if(p < 2) {
		return "Baby";
	}
	if(p < 12) {
		return "Child";
	}
	if(p < 16) {
		return "Teenager";
	}
	if(p < 26) {
		return "Youth";
	}
	if(p < 71) {
		return "Man";
	}
	return "Old man";
}

// Exercise 12/20
string personNames(char s) {
	if(s != 'm' && s != 'f') return "Such a sex not exist";
	return ((s == 'm') ? "ManName1, ManName2, ManName3, ManName4" : "WomanName1, WomanName2, WomanName3, WomanName4");
}

// Exercise 13/20
unsigned int transportSpeed(char t) {
	switch (t) {
		case 'a':			// automobile
			return 350;
		case 'v':			// velobike
			return 75;
		case 'b':			// bike
			return 200;
		case 'f':			// flight
			return 1600;
		case 't':			// traine
			return 250;
		default:
			return 0;
	}
}

// Exercise 14/20
string chanProg(unsigned int c) {
	if(c < 1 || c > 5) return "Such a channel not exist";
	string prog[] = {
		"Prog 1, Prog 2, Prog 3, Prog 4, Prog 5",
		"Prog 6, Prog 7, Prog 8, Prog 9, Prog 10",
		"Prog 11, Prog 12, Prog 13, Prog 14, Prog 15",
		"Prog 16, Prog 17, Prog 18, Prog 19, Prog 20",
		"Prog 21, Prog 22, Prog 23, Prog 24, Prog 25",
	};
	return prog[c - 1];
}

// Exercise 15/20
perANDarea(char c) {
	switch(c) {
		case 'c': {
			cout << "\tInput the circle radius" << endl;
			double r;
			cout << "\n\t";
			cin >> r;
			if(r < 0) {
				cout << "\tError: only positive number" << endl;
			} else{
				cout << "\tThe circle perimeter:\t\t" << 2 * 3.14159265 * r << endl;
				cout << "\tThe circle area:\t\t" << 3.14159265 * r * r << endl;
			}
			break;
		}
		case 'r': {
			cout << "\tInput the rectangle sides \"a\" and \"b\"" << endl;
			double a, b;
			cout << "\n\t";
			cin >> a >> b;
			if(a < 0 || b < 0) {
				cout << "\tError: only positive numbers" << endl;
			} else{
				cout << "\tThe rectangle perimeter:\t" << 2 * (a + b) << endl;
				cout << "\tThe rectangle area:\t\t" << a * b << endl;
			}
			break;
		}
		case 't': {
			cout << "\tInput the triangle sides \"a\", \"b\" and \"c\"" << endl;
			double a, b, c, p;
			cout << "\n\t";
			cin >> a >> b >> c;
			if(a < 0 || b < 0 || c < 0) {
				cout << "\tError: only positive numbers" << endl;
			} else if(a + b <= c || a + c <= b || b + c <= a) {
				cout << "\tSuch a triangle not exist" << endl;
			} else{
				p = a + b + c;
				cout << "\tThe triangle perimeter:\t\t" << p << endl;
				p /= 2;
				cout << "\tThe triangle area:\t\t" << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
			}
			break;
		}
		default:
			cout << "\tSuch a figure not exist" << endl;
	}
}

int main() {
	
	const int exNum = 15;
	int mode;
	string exercise[exNum];
	exercise[0] = "Month name from his number";
	exercise[1] = "Number of days to end of month";
	exercise[2] = "Suit name from his number";
	exercise[3] = "Card name from his number";
	exercise[4] = "Full card name from suit and card number";
	exercise[5] = "Month name from January 1, 1990";
	exercise[6] = "Doctors working hours";
	exercise[7] = "Test assessment";
	exercise[8] = "Two number calculator";
	exercise[9] = "Animal name from year";
	exercise[10] = "Age category from years";
	exercise[11] = "Peaple names by sex";
	exercise[12] = "Transport speed by first character";
	exercise[13] = "Popular programms of channel";
	exercise[14] = "Calculate the figure perimeter and area";
	
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 3, II" << endl;

	do{
	
		cout << "\n\n\tPlease choise the number from 0 to " << exNum << endl;
		cout << "\n\t\t0 \t- Exit" << endl;
		
		for(int i = 0; i < exNum; i++) {
			cout << "\t\t" << i + 1 << " \t- " << exercise[i] << endl;
		}

		cout << "\t";

		cin >> mode;

		switch(mode) {

			case 1: {
				// Exercise 1/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the month number:" << endl;
				cout << "\n\t";
				
				int a;
				
				cin >> a;

				cout << "\n\tResult:\t" << a << " - " << monthName(a) << endl;
				
			break;
			}

			case 2: {
				// Exercise 2/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the month and day:" << endl;
				cout << "\n\t";

				int a, b;

				cin >> a >> b;

				cout << "\n\tResult:\t" << "Days number from " << monthName(a) << ", " << b << " to end of month:";
				cout << "\n\n\t\t\t" << daysToEnd(a, b) << endl;
			break;
			}

			case 3: {
				// Exercise 3/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the suit number:" << endl;
				cout << "\n\t";
				
				int a;
				
				cin >> a;

				cout << "\n\tResult:\t" << a << " - " << suitName(a) << endl;
				
			break;
			}

			case 4: {
				// Exercise 4/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the card number:" << endl;
				cout << "\n\t";
				
				int a;
				
				cin >> a;

				cout << "\n\tResult:\t" << a << " - " << cardName(a) << endl;

			break;
			}

			case 5: {
				// Exercise 5/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the suit and card numbers:" << endl;
				cout << "\n\t";

				int a, b;

				cin >> a >> b;

				cout << "\n\tResult:\t" << "The card is " << suitName(a) << ", " << cardName(b) << endl;

			break;
			}

			case 6: {
				// Exercise 6/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the month number:" << endl;
				cout << "\n\t";
				
				int a;
				
				cin >> a;

				cout << "\n\tResult:\t" << a << " month form January 1, 1990 - " << monthName1990(a) << endl;
				
			break;
			}

			case 7: {
				// Exercise 7/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the day number:" << endl;
				cout << "\n\t";
				
				int a;
				
				cin >> a;

				cout << "\n\tResult:\t" << doctorsHours(a) << endl;
				
			break;
			}

			case 8: {
				// Exercise 8/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the test point:" << endl;
				cout << "\n\t";
				
				int a;
				
				cin >> a;

				cout << "\n\tResult:\t" << testAsse(a) << endl;
				
			break;
			}
			
			case 9: {
				// Exercise 9/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput first number, operator and second number:" << endl;
				cout << "\n\t";
				
				int a, b;
				char c;
				
				cin >> a >> c >> b;

				cout << "\n\tResult:\t" << a << " " << c << " " << b << " = " << calcTwoNum(a, b, c) << endl;
				
			break;
			}
			
			case 10: {
				// Exercise 10/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the year:" << endl;
				cout << "\n\t";
				
				int a;
				
				cin >> a;

				cout << "\n\tResult:\t" << a << " - " << animalName(a) << endl;
				
			break;
			}
			
			case 11: {
				// Exercise 11/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the year:" << endl;
				cout << "\n\t";
				
				int a;
				
				cin >> a;

				cout << "\n\tResult:\t" << a << " - " << ageCat(a) << endl;
				
			break;
			}
			
			case 12: {
				// Exercise 12/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the sex - \"m\" for male, \"f\" for female:" << endl;
				cout << "\n\t";

				char c;

				cin >> c;

				cout << "\n\tResult:\t" << personNames(c) << endl;

			break;
			}
			
			case 13: {
				// Exercise 13/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the transport first char:" << endl;
				cout << "\n\t";

				char c;

				cin >> c;

				cout << "\n\tResult:\t" << transportSpeed(c) << endl;

			break;
			}
			
			case 14: {
				// Exercise 14/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the channel number from 1 to 5:" << endl;
				cout << "\n\t";

				unsigned int a;

				cin >> a;

				cout << "\n\tResult:\t" << chanProg(a) << endl;

			break;
			}
			
			case 15: {
				// Exercise 15/20
				cout << "\n\t\tExercise " << mode << "/20" << endl;
				cout << "\t" << exercise[mode - 1] << endl;
				cout << "\n\tInput the first char of figure name:" << endl;
				cout << "\n\t";

				char f;

				cin >> f;

				perANDarea(f);

			break;
			}

			default:
			cout << "\tFinished" << endl;
		}

		if(mode > 0 && mode <= exNum) {
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