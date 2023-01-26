// Programming on C++
// Exercises
// Chapter 6, III
// Integers arrays

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

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

int **newArray(int &rows, int &columns) {
	if(!rows) {
		cout << "\tNumber of rows = ";
		cin >> rows;
	}
	if(!columns) {
		cout << "\tNumber of columns = ";
		cin >> columns;
	}
	int **arr = createArray(rows, columns);
	for(int i = 0; i < rows; ++i) {
		for(int j = 0; j < columns; ++j) {
			cout << "\tARRAY[" << i << "][" << j << "] = ";
		cin >> *(*(arr + i) + j);
		}
	}
	return arr;
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
	cout << "\tCalculating the arithmetic mean of odd elements above the main diagonal\n";
	int s = 0, k = 0;
	for(int i = 0; i < (m < n ? m : n - 1); ++i) {
		for(int j = i + 1; j < n; ++j) {
			//*(*(arr + i) + j) = 0;
			if(*(*(arr + i) + j) % 2) {
				s += *(*(arr + i) + j);
				++k;
			}
		}
	}
	return ((k) ? (double) s / k : 0);
}

// Exercise 2/20
double calcArr02(int **arr, int m, int n) {
	cout << "\tCalculating the arithmetic mean of even elements below the main diagonal\n";
	int s = 0, k = 0;
	for(int i = 1; i < m; ++i) {
		for(int j = 0; j < i; ++j) {
			//*(*(arr + i) + j) = 0;
			if(*(*(arr + i) + j) % 2) {
				continue;
			}
			s += *(*(arr + i) + j);
			++k;
		}
	}
	return ((k) ? (double) s / k : 0);
}

// Exercise 3/20
double calcArr03(int **arr, int m, int n) {
	cout << "\tCalculating the sum of elements of the side diagonal\n";
	int s = 0;
	for(int i = m - 1, j = 0; j < (m < n ? m : n); --i, ++j) {
		//*(*(arr + i) + j) = 0;
		s += *(*(arr + i) + j);
	}
	return s;
}

// Exercise 4/20
double calcArr04(int **arr, int m, int n) {
	cout << "\tCalculating the arithmetic mean of non-zero elements over the secondary diagonal\n";
	int s = 0, k = 0;
	for(int i = 0; i < m - 1; ++i) {
		for(int j = 0; j < (m > n ? n - i : m - 1 - i); ++j) {
			//*(*(arr + i) + j) = 0;
			if(*(*(arr + i) + j) == 0) {
				continue;
			}
			s += *(*(arr + i) + j);
			++k;
		}
	}
	return ((k) ? (double) s / k : 0);
}

// Exercise 5/20
double calcArr05(int **arr, int m, int n) {
	cout << "\tCalculating the arithmetic mean of elements under the secondary diagonal\n";
	int s = 0, k = 0;
	for(int i = m - 1; i >= (m < n ? 0 : m - n + 1); --i) {
		for(int j = m - i; j < n; ++j) {
			//*(*(arr + i) + j) = 0;
			s += *(*(arr + i) + j);
			++k;
		}
	}
	return ((k) ? (double) s / k : 0);
}

// Exercise 6/20
double calcArr06(int **arr, int m, int n) {
	cout << "\tReplacing columns\n";
	for(int i = 0; i < m; ++i) {
		for(int j = 0; j < n / 2; ++j) {
			//*(*(arr + i) + j) = 0;
			int temp = *(*(arr + i) + j);
			*(*(arr + i) + j) = *(*(arr + i) + n - 1 - j);
			*(*(arr + i) + n - 1 - j) = temp;
		}
	}
	return 0;
}

// Exercise 7/20
double calcArr07(int **arr, int m, int n) {
	cout << "\tReplacing rows\n";
	int i_1 = (m % 2 ? 0 : m / 2 - 1);
	int i_2 = m / 2;
	for(int j = 0; j < n; ++j) {
		int temp = *(*(arr + i_1) + j);
		*(*(arr + i_1) + j) = *(*(arr + i_2) + j);
		*(*(arr + i_2) + j) = temp;
	}
	return 0;
}

// Exercise 8/20
double calcArr08(int **arr, int m, int n) {
	cout << "\tReplacing columns\n";
	int j_1 = (n % 2 ? 0 : n / 2 - 1);
	int j_2 = n / 2;
	for(int i = 0; i < m; ++i) {
		int temp = *(*(arr + i) + j_1);
		*(*(arr + i) + j_1) = *(*(arr + i) + j_2);
		*(*(arr + i) + j_2) = temp;
	}
	return 0;
}

// Exercise 9/20
double calcArr09(int **arr, int m, int n) {
	if(m % 2) return 0;
	cout << "\tReplacing rows\n";
	for(int i = 0; i < m; i += 2) {
		for(int j = 0; j < n; ++j) {
		int temp = *(*(arr + i) + j);
		*(*(arr + i) + j) = *(*(arr + i + 1) + j);
		*(*(arr + i + 1) + j) = temp;
		}
	}
	return 0;
}

// Exercise 10/20
double calcArr10(int **arr, int m, int n) {
	if(n % 2) return 0;
	cout << "\tReplacing columns\n";
	for(int i = 0; i < m; ++i) {
		for(int j = 0; j < n; j += 2) {
			int temp = *(*(arr + i) + j);
			*(*(arr + i) + j) = *(*(arr + i) + j + 1);
			*(*(arr + i) + j + 1) = temp;
		}
	}
	return 0;
}

// Exercise 11/20
double calcArr11(int **arr, int m, int n) {
	cout << "\tMatrix exponentiation\n";
	int k;
	cout << "\tEnter degree n = ";
	cin >> k;
	if(k < 0) 
	{
		cout << "\tDegree must be positive number or zero.\n";
		return 0;
	}
	int **tempArr, **powArr = createArray(m, n);
	for(int i = 0; i < m; ++i) {
		*(*(powArr + i) + i) = 1;
	}
	while(k--) {
		tempArr = powArr;
		powArr = multMatrix(arr, m, n, tempArr, m, n);
		deleteArray(tempArr, m);
	}
	printArray(powArr, m, n);
	deleteArray(powArr, m);
	return 0;
}

// Exercise 12/20
double calcArr12(int **arr, int m, int n) {
	cout << "\tMatrix Norm Calculation by rows\n";
	int norm = 0;
	for(int i = 0; i < m; ++i) {
		int temp = 0;
		for(int j = 0; j < n; ++j) {
			temp += abs(*(*(arr + i) + j));
		}
		if(temp > norm) norm = temp;
	}
	return norm;
}

// Exercise 13/20
double calcArr13(int **arr, int m, int n) {
	cout << "\tMatrix Norm Calculation by columns\n";
	int norm = 0;
	for(int j = 0; j < n; ++j) {
		int temp = 0;
		for(int i = 0; i < m; ++i) {
			temp += abs(*(*(arr + i) + j));
		}
		if(temp > norm) norm = temp;
	}
	return norm;
}

// Exercise 14/20
double calcArr14(int **arr, int m, int n) {
	cout << "\tDisplaying matrix elements in a zigzag row by row\n\t";
	for(int i = 0; i < m; ++i) {
		int dir = i % 2;
		for(int j = (dir ? n - 1 : 0), k = (dir ? -1 : 1); j != (dir ? -1 : n); j += k) {
			cout << *(*(arr + i) + j) << " ";
		}
	}
	return 0;
}

// Exercise 15/20
double calcArr15(int **arr, int m, int n) {
	cout << "\tDetermining the symmetry of a matrix with respect to the main diagonal\n";
	int s = 0;
	for(int i = 0; i < m - 1; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if(*(*(arr + i) + j) == *(*(arr + j) + i))
			{
				s = 1;
			} else {
				s = 0;
				cout << "\tThe matrix not is symmetrical about the main diagonal\n";
				return s;
			}
		}
	}
	cout << "\tThe matrix is symmetrical about the main diagonal\n";
	return s;
}

// Exercise 16/20
double calcArr16(int **arr, int m, int n) {
	cout << "\tFilling matrix elements in a zigzag column by column\n\t";
	int tempInd = 0;
	int *tempArr = new int[m * n];
	for(int i = 0; i < m; ++i)
	{
		for(int j = 0; j < n; ++j, ++tempInd)
		{
			*(tempArr + tempInd) = *(*(arr + i) + j);
		}
	}
	tempInd = 0;
	for(int j = 0; j < n; ++j) {
		int dir = j % 2;
		for(int i = (dir ? m - 1 : 0), k = (dir ? -1 : 1); i != (dir ? -1 : m); ++tempInd, i += k) {
			*(*(arr + i) + j) = *(tempArr + tempInd);
		}
	}
	delete [] tempArr;
	return 0;
}

// Exercise 17/20
double calcArr17(int **arr, int m, int n) {
	cout << "\tDetermining if any row has only positive elements\n";
	int s = 0;
	for(int i = 0; i < m; ++i) {
		for(int j = 0, k = 0; j < n; ++j) {
			if(*(*(arr + i) + j) > 0)
			{
				k = 1;
			} else {
				k = 0;
			}
			if(k) s = 1;
		}
	}
	cout << "\tThe matrix does" << (s ? " " : " not ") << "contain a row of only positive elements\n";
	return s;
}

// Exercise 18/20
double calcArr18(int **arr, int m, int n) {
	cout << "\tDetermining if any column has only negative elements\n";
	int s = 0;
	for(int j = 0; j < n; ++j) {
		for(int i = 0, k = 0; i < m; ++i) {
			if(*(*(arr + i) + j) < 0)
			{
				k = 1;
			} else {
				k = 0;
			}
			if(k) s = 1;
		}
	}
	cout << "\tThe matrix does" << (s ? " " : " not ") << "contain a column of only negative elements\n";
	return s;
}

// Exercise 19/20
double calcArr19(int **arr, int m, int n) {
	cout << "\tReplacing each maximum element of a row with the opposite\n";
	for(int i = 0; i < m; ++i) {
		int max = *(*(arr + i));
		int maxInd = 0;
		for(int j = 0; j < n; ++j) {
			if(*(*(arr + i) + j) > max) {
				max = *(*(arr + i) + j);
				maxInd = j;
			}
		}
		*(*(arr + i) + maxInd) = -max;
	}
	return 0;
}

// Exercise 20/20
double calcArr20(int **arr, int m, int n) {
	cout << "\tReplacing each minimum element of a column with the zero\n";
	for(int j = 0; j < n; ++j) {
		int min = *(*arr + j);
		int minInd = 0;
		for(int i = 0; i < m; ++i) {
			if(*(*(arr + i) + j) < min) {
				min = *(*(arr + i) + j);
				minInd = i;
			}
		}
		*(*(arr + minInd) + j) = 0;
	}
	return 0;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 6, III\n\n";

	const int exNum = 20;
	int mode;
	string exerHead = "Calculating array";
	//typedef double (*calcArrP)(int);
	double (*calcArr[])(int**, int, int) = {calcArr01, calcArr02, calcArr03, calcArr04, calcArr05, 
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
			cout << "\n\t" << exerHead << " " << mode << "/" << exNum << "\n";
			int m = 4, n = 4;
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