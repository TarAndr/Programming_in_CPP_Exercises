// Programming on C++
// Exercises
// Chapter 6, IV
// Integers arrays

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int *createArray(int n) {
	if(!n) return NULL;
	int *arr = new int[n];
	for(int i = 0; i < n; ++i) {
		*(arr + i) = 0;
	}
	return arr;
}

int **createArray(int rows, int columns) {
	if(!rows || !columns) return NULL;
	int **arr = new int *[rows];
	for(int i = 0; i < rows; ++i) {
		*(arr + i) = new int[columns];
	}
	for(int i = 0; i < rows; ++i) {
		for(int j = 0; j < columns; ++j) {
			*(*(arr + i) + j) = 0;
		}
	}
	return arr;
}

int *newArray(int &n) {
	if(!n) {
		cout << "\tNumber of elements = ";
		cin >> n;
	}
	
	cout << "\tInput numbers in ARRAY of " << n << " elements:\n\n";
	
	int *arr = createArray(n);
	for(int i = 0; i < n; ++i) {
		cout << "\tARRAY[" << i << "] = ";
		cin >> *(arr + i);
	}
	return arr;
}

int **newArray(int &rows, int &columns) {
	if(!rows) {
		cout << "\tNumber of rows = ";
		cin >> rows;
	}
	if(!columns) {
		cout << "\tNumber of columns = ";
		cin >> columns;
	}
	
	cout << "\tInput numbers in TABLE of " << rows << " rows and " << columns << " columns:\n\n";

	int **arr = createArray(rows, columns);
	for(int i = 0; i < rows; ++i) {
		for(int j = 0; j < columns; ++j) {
			cout << "\tARRAY[" << i << "][" << j << "] = ";
			cin >> *(*(arr + i) + j);
		}
	}
	return arr;
}

void printArray(int *arr, int n) {
	cout << "\n\t";
	for(int i = 0; i < n; ++i) {
		cout << *(arr + i) << "\t";
	}
	cout << "\n\n";
}

void printArray(int **arr, int rows, int columns) {
	cout << "\n\t";
	for(int i = 0; i < rows; ++i, cout << "\n\n\t") {
		for(int j = 0; j < columns; ++j) {
			cout << *(*(arr + i) + j) << "\t";
		}
	}
	cout << "\n";
}

void deleteArray(int *arr) {
	delete [] arr;
	cout << "\tAll done\n";
}

void deleteArray(int **arr, int rows) {
	for(int i = 0; i < rows; ++i) {
		delete [] arr[i];
	}
	delete [] arr;
	cout << "\tAll done\n";
}

int **multMatrix(int **arr1, int m1, int n1, int **arr2, int m2, int n2) {
	cout << "\tMatrix multiplication\n";
	if(n1 != m2) {
		cout << "\tThe number of columns of matrix A must be equal to the number of rows of matrix B\n";
		return NULL;
	}
	int **arr = createArray(m1, n2);
	for(int i = 0; i < m1; ++i) {
		for(int j = 0; j < n2; ++j) {
			for(int k = 0; k < n1; ++k) {
				*(*(arr + i) + j) += *(*(arr1 + i) + k) * *(*(arr2 + k) + j);
			}
		}
	}
	return arr;
}

// Exercise 1/20
double calcArr01(int **arr, int m, int n) {
	
	cout << "\tWriting the maximum elements of rows to a new array\n";
	
	int *vect = createArray(m);
	
	for(int i = 0; i < m; ++i) {
		
		int max = *(*(arr + i));
		
		for(int j = 0; j < n; ++j) {
			
			if(*(*(arr + i) + j) > max) {
				max = *(*(arr + i) + j);
			}
		}
		
		*(vect + i) = max;
		
	}
	
	printArray(vect, m);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 2/20
double calcArr02(int **arr, int m, int n) {
	
	cout << "\tWriting the minimum elements of columns to a new array\n";
	
	int *vect = createArray(n);
	
	for(int j = 0; j < n; ++j) {
		int min = *(*(arr) + j);
		for(int i = 0; i < m; ++i) {
			if(*(*(arr + i) + j) < min) {
				min = *(*(arr + i) + j);
			}
		}
		*(vect + j) = min;
	}
	
	printArray(vect, n);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 3/20
double calcArr03(int **arr, int m, int n) {
	
	cout << "\tReplacing even columns of a table with a vector\n";
	
	int *vect = newArray(m);
	
	for(int j = 1; j < n; j += 2) {
		for(int i = 0; i < m; ++i) {
			*(*(arr + i) + j) = *(vect + i);
		}
	}
	
	printArray(vect, m);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 4/20
double calcArr04(int **arr, int m, int n) {
	
	cout << "\tReplacing odd table rows with a vector\n";
	
	int *vect = newArray(n);
	
	for(int i = 0; i < m; i += 2) {
		for(int j = 0; j < n; ++j) {
			*(*(arr + i) + j) = *(vect + j);
		}
	}
	
	printArray(vect, n);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 5/20
double calcArr05(int **arr, int m, int n) {
	
	cout << "\tMultiplication of a matrix by a vector\n";
	
	int k = 1;
	
	int **vect = newArray(n, k);
	
	printArray(vect, n, 1);
	
	int **mult = multMatrix(arr, m, n, vect, n, 1);
	
	printArray(mult, m, 1);
	
	deleteArray(vect, n);
	
	deleteArray(mult, m);
	
	return 0;
}

// Exercise 6/20
double calcArr06(int **arr, int m, int n) {
	
	cout << "\tCounting the number of positive elements in rows\n";
	
	int *vect = createArray(m);
	
	for(int i = 0; i < m; ++i) {
		
		int cnt = 0;
		
		for(int j = 0; j < n; ++j) {
			if(*(*(arr + i) + j) > 0) ++cnt;
		}
		
		*(vect + i) = cnt;
		
	}
	
	printArray(vect, m);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 7/20
double calcArr07(int **arr, int m, int n) {
	
	cout << "\tCounting the sum of negative elements in columns\n";
	
	int *vect = createArray(n);
	
	for(int j = 0; j < n; ++j) {
		
		int sum = 0;
		
		for(int i = 0; i < m; ++i) {
			if(*(*(arr + i) + j) < 0) sum += *(*(arr + i) + j);
		}
		
		*(vect + j) = sum;
		
	}
	
	printArray(vect, n);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 8/20
double calcArr08(int **arr, int m, int n) {
	
	cout << "\tCounting the sum of even positive elements in columns\n";
	
	int *vect = createArray(n);
	
	for(int j = 0; j < n; ++j) {
		
		int sum = 0;
		
		for(int i = 0; i < m; ++i) {
			if(*(*(arr + i) + j) % 2 || *(*(arr + i) + j) <= 0) continue;
			sum += *(*(arr + i) + j);
		}
		
		*(vect + j) = sum;
		
	}
	
	printArray(vect, n);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 9/20
double calcArr09(int **arr, int m, int n) {
	
	cout << "\tCounting the number of elements in rows greater than a given number\n";
	
	cout << "\n\tEnter a number to compare: ";
	int num;
	cin >> num;
	
	int *vect = createArray(m);
	
	for(int i = 0; i < m; ++i) {
		
		int cnt = 0;
		
		for(int j = 0; j < n; ++j) {
			if(*(*(arr + i) + j) > num) ++cnt;
		}
		
		*(vect + i) = cnt;
		
	}
	
	printArray(vect, m);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 10/20
double calcArr10(int **arr, int m, int n) {
	
	cout << "\tFinding the first positive element in each column\n";
	
	int *vect = createArray(n);
	
	for(int j = 0; j < n; ++j) {
		
		int num = 0;
		
		for(int i = 0; i < m; ++i) {
			if(*(*(arr + i) + j) > 0) {
				num = *(*(arr + i) + j);
				break;
			}
		}
		
		*(vect + j) = num;
		
	}
	
	printArray(vect, n);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 11/20
double calcArr11(int **arr, int m, int n) {
	
	cout << "\tFinding the last even element in each row\n";

	int *vect = createArray(m);
	
	for(int i = 0; i < m; ++i) {
		
		int num = 0;
		
		for(int j = 0; j < n; ++j) {
			if(*(*(arr + i) + j) % 2) continue;
			num = *(*(arr + i) + j);
		}
		
		*(vect + i) = num;
		
	}
	
	printArray(vect, m);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 12/20
double calcArr12(int **arr, int m, int n) {
	
	cout << "\tFinding the last odd element number in each column\n";
	
	int *vect = createArray(n);
	
	for(int j = 0; j < n; ++j) {
		
		int num = 0;
		
		for(int i = 0; i < m; ++i) {
			if(*(*(arr + i) + j) % 2) {
				num = i + 1;
			}
		}
		
		*(vect + j) = num;
		
	}
	
	printArray(vect, n);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 13/20
double calcArr13(int **arr, int m, int n) {
	
	cout << "\tFinding the number of the first negative element in each row\n";

	int *vect = createArray(m);
	
	for(int i = 0; i < m; ++i) {
		
		int num = 0;
		
		for(int j = 0; j < n; ++j) {
			if(*(*(arr + i) + j) < 0) {
				num = j + 1;
				break;
			}
		}
		
		*(vect + i) = num;
		
	}
	
	printArray(vect, m);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 14/20
double calcArr14(int **arr, int m, int n) {
	
	cout << "\tCalculation of the sum of elements with numbers from k1 to k2 for each row\n";

	int *vect = createArray(m);
	
	cout << "\n\tInput numbers \"k1\" and \"k2\"\n";
	int k1, k2;
	cin >> k1 >> k2;
	
	if(k1 > k2) {
		int temp = k1;
		k1 = k2;
		k2 = temp;
	}
	
	if(k1 < 1) k1 = 1;
	
	if(k2 > n) k2 = n;
	
	for(int i = 0; i < m; ++i) {
		
		int sum = 0;
		
		for(int j = k1 - 1; j < k2; ++j) {
			sum += *(*(arr + i) + j);
		}
		
		*(vect + i) = sum;
		
	}
	
	printArray(vect, m);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 15/20
double calcArr15(int **arr, int m, int n) {
	
	cout << "\tCalculation of the multiplication of elements with numbers from k1 to k2 for each column\n";

	int *vect = createArray(n);
	
	cout << "\n\tInput numbers \"k1\" and \"k2\"\n";
	int k1, k2;
	cin >> k1 >> k2;
	
	if(k1 > k2) {
		int temp = k1;
		k1 = k2;
		k2 = temp;
	}
	
	if(k1 < 1) k1 = 1;
	
	if(k2 > m) k2 = m;
	
	for(int j = 0; j < n; ++j) {
		
		int mult = 1;
		
		for(int i = k1 - 1; i < k2; ++i) {
			mult *= *(*(arr + i) + j);
		}
		
		*(vect + j) = mult;
		
	}
	
	printArray(vect, n);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 16/20
double calcArr16(int **arr, int m, int n) {
	
	cout << "\tCalculate the sum of elements of each row that do not fall within a given interval\n";

	int *vect = createArray(m);
	
	cout << "\n\tInput interval from \"a\" to \"b\"\n";
	int a, b;
	cin >> a >> b;
	
	if(a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	for(int i = 0; i < m; ++i) {
		
		int sum = 0;
		
		for(int j = 0; j < n; ++j) {
			if(*(*(arr + i) + j) < a || *(*(arr + i) + j) > b) {
				sum += *(*(arr + i) + j);
			}
		}
		
		*(vect + i) = sum;
		
	}
	
	printArray(vect, m);
	
	deleteArray(vect);
	
	return 0;
}

// Exercise 17/20
double calcArr17(int **arr, int m, int n) {
	
	cout << "\tDetermining the maximum sum of elements of each row\n";

	int *vect = createArray(m);

	for(int i = 0; i < m; ++i) {
		
		int sum = 0;
		
		for(int j = 0; j < n; ++j) {
			sum += *(*(arr + i) + j);
		}
		
		*(vect + i) = sum;
		
	}

	printArray(vect, m);

	int max = *(vect);
	for(int i = 0; i < m; ++i) {
		if(*(vect + i) > max) max = *(vect + i);
	}

	deleteArray(vect);
	
	return max;
}

// Exercise 18/20
double calcArr18(int **arr, int m, int n) {
	
	cout << "\tDetermining the minimum multiplication of the elements of each column\n";

	int *vect = createArray(n);

	for(int j = 0; j < n; ++j) {
		
		int mult = 1;
		
		for(int i = 0; i < m; ++i) {
			mult *= *(*(arr + i) + j);
		}
		
		*(vect + j) = mult;
		
	}
	
	printArray(vect, n);

	int min = *(vect);
	for(int i = 0; i < n; ++i) {
		if(*(vect + i) < min) min = *(vect + i);
	}

	deleteArray(vect);
	
	return min;
}

// Exercise 19/20
double calcArr19(int **arr, int m, int n) {
	
	cout << "\tDetermining the number of the first pair of unequal elements in each row\n";

	int *vect = createArray(m);

	for(int i = 0; i < m; ++i) {
		
		int num = 0;
		for(int j = 0; j < n - 1; ++j) {
			if(*(*(arr + i) + j) != *(*(arr + i) + j + 1)) {
				num = j + 1;
				break;
			}
		}
		
		*(vect + i) = num;
		
	}

	printArray(vect, m);

	deleteArray(vect);
	
	return 0;
}

// Exercise 20/20
double calcArr20(int **arr, int m, int n) {
	
	cout << "\tDetermining the number of the first pair of equal elements in each column\n";

	int *vect = createArray(n);

	for(int j = 0; j < n; ++j) {
		
		int num = 0;
		for(int i = 0; i < m - 1; ++i) {
			if(*(*(arr + i) + j) == *(*(arr + i + 1) + j)) {
				num = i + 1;
				break;
			}
		}
		*(vect + j) = num;

	}

	printArray(vect, n);

	deleteArray(vect);
	
	return 0;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 6, IV\n\n";

	const int exNum = 20;
	int mode;
	string exerHead = "Calculating array";
	//typedef double (*calcArrP)(int);
	double (*calcArr[])(int**, int, int) = {calcArr01, calcArr02, calcArr03, calcArr04, calcArr05, 
	calcArr06, calcArr07, calcArr08, calcArr09, calcArr10, calcArr11, calcArr12, calcArr13, 
	calcArr14, calcArr15, calcArr16, calcArr17, calcArr18, calcArr19, calcArr20};

	do{
		cout << "\n\n\tPlease choise the number from 0 to " << exNum << "\n";
		cout << "\n\t\t0 \t- Exit\n";

		for(int i = 1; i <= exNum; i++) {
			cout << "\t\t" << i << " \t- " << exerHead << " " << i << "\n";
		}

		//cout << setprecision(3) << fixed;
		cout << "\t";

		cin >> mode;

		if(mode > 0 && mode <= exNum) {
			cout << "\n\t" << exerHead << " " << mode << "/" << exNum << "\n";
			int m = 4, n = 5;
			double x = 0;
			int **arr = newArray(m, n);
			printArray(arr, m, n);
			cout << "\n\tResult:\n\n";
			x = calcArr[mode - 1](arr, m, n);
			printArray(arr, m, n);
			if(x) cout << "\t" << x << "\n\n";
			deleteArray(arr, m);
			delete arr;
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