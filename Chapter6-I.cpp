// Programming on C++
// Exercises
// Chapter 6, I
// Integers arrays

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void inputArray(int *arr, int n) {
	for(int i = 0; i < n; ++i) {
		cout << "\tARRAY[" << i << "] = ";
		cin >> arr[i];
	}

}

void printArray(int *arr, int n) {
	for(int i = 0; i < n; ++i) {
		cout << "\tARRAY[" << i << "] = " << arr[i] << "\n";
	}
}

// Exercise 1/20
double calcArr01(int *arr, int n) {
	cout << "\tReplace positive numbers with negative\n";
	for(int i = 0; i < n; ++i) {
		if(arr[i] > 0) arr[i] = -arr[i];
	}
	return 0;
}

// Exercise 2/20
double calcArr02(int *arr, int n) {
	cout << "\tReplace numbers smaller then 5 with 5\n";
	for(int i = 0; i < n; ++i) {
		if(arr[i] < 5) arr[i] = 5;
	}
	return 0;
}

// Exercise 3/20
double calcArr03(int *arr, int n) {
	cout << "\tReplace numbers from [3; 7] with 0\n";
	for(int i = 0; i < n; ++i) {
		if(arr[i] >= 3 && arr[i] <= 7) arr[i] = 0;
	}
	return 0;
}

// Exercise 4/20
double calcArr04(int *arr, int n) {
	cout << "\tReplace negative numbers not divided 3 with positive\n";
	for(int i = 0; i < n; ++i) {
		if(arr[i] < 0 && arr[i] % 3) arr[i] = -arr[i];
	}
	return 0;
}

// Exercise 5/20
double calcArr05(int *arr, int n) {
	cout << "\tReplace numbers smaller then 5 with double one\n";
	for(int i = 0; i < n; ++i) {
		if(arr[i] < 5) arr[i] *= 2;
	}
	return 0;
}

// Exercise 6/20
double calcArr06(int *arr, int n) {
	cout << "\tCalculate average of array elements\n";
	double s = 0;
	for(int i = 0; i < n; ++i) {
		s += arr[i];
	}
	return n == 0 ? 0 : s / n;
}

// Exercise 7/20
double calcArr07(int *arr, int n) {
	cout << "\tCalculate average of negative array elements\n";
	int m = 0;
	double s = 0;
	for(int i = 0; i < n; ++i) {
		if(arr[i] < 0) {
			s += arr[i];
			++m;
		}
	}
	return m == 0 ? 0 : s / m;
}

// Exercise 8/20
double calcArr08(int *arr, int n) {
	cout << "\tCalculate number of odd elements\n";
	int m = 0;
	for(int i = 0; i < n; ++i) {
		if(arr[i] % 2) ++m;
	}
	return m;
}

// Exercise 9/20
double calcArr09(int *arr, int n) {
	cout << "\tCalculate summ of numbers from [3; 7]\n";
	int s = 0;
	for(int i = 0; i < n; ++i) {
		if(arr[i] >= 3 && arr[i] <= 7) s += arr[i];
	}
	return s;
}

// Exercise 10/20
double calcArr10(int *arr, int n) {
	cout << "\tCalculate summ of numbers divided by 9\n";
	int s = 0;
	for(int i = 0; i < n; ++i) {
		if(arr[i] % 9) continue;
		s += arr[i];
	}
	return s;
}

// Exercise 11/20
double calcArr11(int *arr, int n) {
	cout << "\tCalculate number of elements exclude from [3; 7]\n";
	int m = 0;
	for(int i = 0; i < n; ++i) {
		if(arr[i] < 3 || arr[i] > 7) ++m;
	}
	return m;
}

// Exercise 12/20
double calcArr12(int *arr, int n) {
	cout << "\tCalculate sum of even numbers squares\n";
	int s = 0;
	for(int i = 0; i < n; ++i) {
		if(arr[i] % 2) continue;
		s += arr[i] * arr[i];
	}
	return s;
}

// Exercise 13/20
double calcArr13(int *arr, int n) {
	cout << "\tPrinting position of numbers bigger then 7\n\t";
	for(int i = 0; i < n; ++i) {
		if(arr[i] > 7) cout << i << " ";
	}
	cout << "\n";
	return 0;
}

// Exercise 14/20
double calcArr14(int *arr, int n) {
	cout << "\tPrinting position of even numbers\n\t";
	for(int i = 0; i < n; ++i) {
		if(arr[i] % 2) cout << i << " ";
	}
	cout << "\n";
	return 0;
}

// Exercise 15/20
double calcArr15(int *arr, int n) {
	cout << "\tPrinting position of numbers not divided by 7\n\t";
	for(int i = 0; i < n; ++i) {
		if(arr[i] % 7) cout << i << " ";
	}
	cout << "\n";
	return 0;
}

// Exercise 16/20
double calcArr16(int *arr, int n) {
	cout << "\tPrinting position of numbers out of range [5; 13]\n\t";
	for(int i = 0; i < n; ++i) {
		if(arr[i] < 5 || arr[i] > 13) cout << i << " ";
	}
	cout << "\n";
	return 0;
}

// Exercise 17/20
double calcArr17(int *arr, int n) {
	cout << "\tDefinition of element multiplication\n";
	int m = 1;
	for(int i = 0; i < n; ++i) {
		m *= arr[i];
	}
	cout << "\tThe resulting number is" << ((m / 100 && m / 100 < 10) ? " " : " not ") << "three-digit\n";
	return n > 0 ? m : 0;
}

// Exercise 18/20
double calcArr18(int *arr, int n) {
	cout << "\tDefinition of element summary\n";
	int s = 0;
	for(int i = 0; i < n; ++i) {
		s += arr[i];
	}
	cout << "\tThe resulting number is" << ((s / 10 && s / 10 < 10) ? " " : " not ") << "two-digit\n";
	return s;
}

// Exercise 19/20
double calcArr19(int *arr, int n) {
	cout << "\tPrinting elements with even indexes\n\t";
	for(int i = 0; i < n; i += 2) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 0;
}

// Exercise 20/20
double calcArr20(int *arr, int n) {
	cout << "\tPrinting positive elements with odd indexes\n\t";
	for(int i = 1; i < n; i += 2) {
		if(arr[i] < 0) continue;
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 0;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 6, I\n\n";

	const int exNum = 20;
	int mode;
	string exerHead = "Calculating array";
	//typedef double (*calcArrP)(int);
	double (*calcArr[])(int*, int) = {calcArr01, calcArr02, calcArr03, calcArr04, calcArr05, calcArr06, calcArr07, calcArr08, calcArr09, 
	calcArr10, calcArr11, calcArr12, calcArr13, calcArr14, calcArr15, calcArr16, calcArr17, calcArr18, calcArr19, calcArr20};

	do{
		cout << "\n\n\tPlease choise the number from 0 to " << exNum << endl;
		cout << "\n\t\t0 \t- Exit\n";

		for(int i = 1; i <= exNum; i++) {
			cout << "\t\t" << i << " \t- " << exerHead << " " << i << endl;
		}

		//cout << setprecision(3) << fixed;
		cout << "\t";

		cin >> mode;

		if(mode > 0 && mode <= exNum) {
			cout << "\n\t" << exerHead << " " << mode << "/" << exNum << endl;
			int n;
			double x = 0;
			cout << "\n\tEnter the number of elements in ARRAY \"n\" = ";
			cin >> n;
			int array[n];
			inputArray(array, n);
			cout << "\n\tResult:\n\n";
			x = calcArr[mode - 1](array, n);
			printArray(array, n);
			if(x) cout << "\t" << x << "\n";
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