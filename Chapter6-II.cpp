// Programming on C++
// Exercises
// Chapter 6, II
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
	cout << "\tCalculate the number of maximum elements\n";
	int max = arr[0];
	for(int i = 1; i < n; ++i) {
		if(arr[i] > max) max = arr[i];
	}
	int k = 0;
	for(int i = 0; i < n; ++i) {
		if(arr[i] == max) ++k;
	}
	return k;
}

// Exercise 2/20
double calcArr02(int *arr, int n) {
	cout << "\tDisplaying the Numbers of the Minimum Elements\n\t";
	int min = arr[0];
	for(int i = 1; i < n; ++i) {
		if(arr[i] < min) min = arr[i];
	}
	for(int i = 0; i < n; ++i) {
		if(arr[i] == min) cout << i + 1 << " ";
	}
	cout << "\n";
	return min;
}

// Exercise 3/20
double calcArr03(int *arr, int n) {
	cout << "\tReplacing all maximum elements with zeros\n";
	int max = arr[0];
	for(int i = 1; i < n; ++i) {
		if(arr[i] > max) max = arr[i];
	}
	for(int i = 0; i < n; ++i) {
		if(arr[i] == max) arr[i] = 0;
	}
	return 0;
}

// Exercise 4/20
double calcArr04(int *arr, int n) {
	cout << "\tReplacing all minimal elements with opposite ones\n";
	int min = arr[0];
	for(int i = 1; i < n; ++i) {
		if(arr[i] < min) min = arr[i];
	}
	for(int i = 0; i < n; ++i) {
		if(arr[i] == min) arr[i] = -arr[i];
	}
	return min;
}

// Exercise 5/20
double calcArr05(int *arr, int n) {
	cout << "\tSwap the Maximum and First Elements\n";
	int max = arr[0], n_max = 0;
	for(int i = 1; i < n; ++i) {
		if(arr[i] > max) max = arr[i], n_max = i;
	}
	int temp = arr[0];
	arr[0] = arr[n_max];
	arr[n_max] = temp;
	return max;
}

// Exercise 6/20
double calcArr06(int *arr, int n) {
	cout << "\tDisplaying numbers of non-maximum elements\n\t";
	int max = arr[0];
	for(int i = 1; i < n; ++i) {
		if(arr[i] > max) max = arr[i];
	}
	for(int i = 0; i < n; ++i) {
		if(arr[i] == max) continue;
		cout << i + 1 << " ";
	}
	cout << "\n";
	return max;
}

// Exercise 7/20
double calcArr07(int *arr, int n) {
	cout << "\tDisplaying the Number of first Minimum Element\n";
	int min = arr[0], min_n = 0;
	for(int i = 1; i < n; ++i) {
		if(arr[i] < min) min = arr[i], min_n = i;
	}
	cout << "\t" << min_n + 1 << "\n";
	return min;
}

// Exercise 8/20
double calcArr08(int *arr, int n) {
	cout << "\tDisplaying the Number of last Maximum Element\n";
	int max = arr[n - 1], max_n = n - 1;
	for(int i = n - 2; i >= 0; --i) {
		if(arr[i] > max) max = arr[i], max_n = i;
	}
	cout << "\t" << max_n + 1 << "\n";
	return max;
}

// Exercise 9/20
double calcArr09(int *arr, int n) {
	cout << "\tCalculate the summ of elements from Maximum to Minimum\n";
	int s = 0, max = arr[0], max_n = 0, min = arr[0], min_n = 0;
	for(int i = 1; i < n; ++i) {
		if(arr[i] > max) max = arr[i], max_n = i;
		if(arr[i] < min) min = arr[i], min_n = i;
	}
	if(max_n < min_n) {
		for(int i = max_n + 1; i < min_n; ++i) {
			s += arr[i];
		}
	}
	else cout << "\tThe number of the maximum element is greater than the minimum\n";
	return s;
}

// Exercise 10/20
double calcArr10(int *arr, int n) {
	cout << "\tDisplaying the Number of first Maximum Element\n";
	int max = arr[0], max_n = 0;
	for(int i = 1; i < n; ++i) {
		if(arr[i] > max) max = arr[i], max_n = i;
	}
	cout << "\t" << max_n + 1 << "\n";
	return max;
}

// Exercise 11/20
double calcArr11(int *arr, int n) {
	cout << "\tDisplaying the Number of last Minimum Element\n";
	int min = arr[n - 1], min_n = n - 1;
	for(int i = n - 2; i >= 0; --i) {
		if(arr[i] < min) min = arr[i], min_n = i;
	}
	cout << "\t" << min_n + 1 << "\n";
	return min;
}

// Exercise 12/20
double calcArr12(int *arr, int n) {
	cout << "\tCalculate the summ of elements between first Maximum and last Minimum\n";
	int s = 0, max = arr[0], max_n = 0;
	for(int i = 1; i < n; ++i) {
		if(arr[i] > max) max = arr[i], max_n = i;
	}
	int min = arr[n - 1], min_n = n - 1;
	for(int i = n - 2; i >= 0; --i) {
		if(arr[i] < min) min = arr[i], min_n = i;
	}
	if(max_n < min_n) {
		for(int i = max_n + 1; i < min_n; ++i) {
			s += arr[i];
		}
	}
	else cout << "\tThe number of the maximum element is greater than the minimum\n";
	return s;
}

// Exercise 13/20
double calcArr13(int *arr, int n) {
	cout << "\tSwapping the first minimum and last maximum elements\n";
	int min = arr[0], min_n = 0;
	for(int i = 1; i < n; ++i) {
		if(arr[i] < min) min = arr[i], min_n = i;
	}
	int max = arr[n - 1], max_n = n - 1;
	for(int i = n - 2; i >= 0; --i) {
		if(arr[i] > max) max = arr[i], max_n = i;
	}
	int temp = arr[min_n];
	arr[min_n] = arr[max_n];
	arr[max_n] = temp;
	return 0;
}

// Exercise 14/20
double calcArr14(int *arr, int n) {
	cout << "\tFinding the maximum negative element\n";
	int max = -pow(2, sizeof(int) * 8) / 2;
	for(int i = 0; i < n; ++i) {
		if(arr[i] >= 0) continue;
		if(arr[i] > max) max = arr[i];
	}
	return max;
}

// Exercise 15/20
double calcArr15(int *arr, int n) {
	cout << "\tFinding the minimum positive element\n";
	int min = pow(2, sizeof(int) * 8) / 2 - 1;
	for(int i = 0; i < n; ++i) {
		if(arr[i] <= 0) continue;
		if(arr[i] < min) min = arr[i];
	}
	return min;
}

// Exercise 16/20
double calcArr16(int *arr, int n) {
	cout << "\tFinding the maximum element modulo\n";
	int max = abs(arr[0]);
	for(int i = 1; i < n; ++i) {
		if(abs(arr[i]) > max) max = abs(arr[i]);
	}
	return max;
}

// Exercise 17/20
double calcArr17(int *arr, int n) {
	cout << "\tCounting the number of pairs of neighboring elements with a given difference\n";
	int dif = 3, cnt = 0;
	for(int i = 1; i < n; ++i) {
		if(abs(arr[i] - arr[i - 1]) == dif) ++cnt;
	}
	return cnt;
}

// Exercise 18/20
double calcArr18(int *arr, int n) {
	cout << "\tCounting the number of elements greater than the previous\n";
	int cnt = 0;
	for(int i = 1; i < n; ++i) {
		if(arr[i] > arr[i - 1]) ++cnt;
	}
	return cnt;
}

// Exercise 19/20
double calcArr19(int *arr, int n) {
	cout << "\tCounting the number of pairs of adjacent elements \n\tin which the previous element is a multiple of the next\n";
	int cnt = 0;
	for(int i = 1; i < n; ++i) {
		if(arr[i - 1] % arr[i] == 0) ++cnt;
	}
	return cnt;
}

// Exercise 20/20
double calcArr20(int *arr, int n) {
	cout << "\tCounting the number of pairs of adjacent elements \n\tin which the previous element is less than the next\n";
	int cnt = 0;
	for(int i = 1; i < n; ++i) {
		if(arr[i - 1] < arr[i]) ++cnt;
	}
	return cnt;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 6, II\n\n";

	const int exNum = 20;
	int mode;
	string exerHead = "Calculating array";
	//typedef double (*calcArrP)(int);
	double (*calcArr[])(int*, int) = {calcArr01, calcArr02, calcArr03, calcArr04, calcArr05, 
	calcArr06, calcArr07, calcArr08, calcArr09, calcArr10, calcArr11, calcArr12, calcArr13, 
	calcArr14, calcArr15, calcArr16, calcArr17, calcArr18, calcArr19, calcArr20};

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