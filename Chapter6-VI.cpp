// Programming on C++
// Exercises
// Chapter 6, VI
// Inserting and deleting rows and/or columns in a table

#include <iostream>

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
	if(columns < 1) return;
	cout << "\n\t";
	for(int i = 0; i < rows; ++i, cout << "\n\n\t") {
		for(int j = 0; j < columns; ++j) {
			cout << *(*(arr + i) + j) << "\t";
		}
	}
	cout << "\n";
}

bool dropElemFromArr(int *arr, int &n, int k) {
	if(k < 0 || k > n) return 1;
	for(int i = k; i < n - 1; ++i) {
		*(arr + i) = *(arr + i + 1);
	}
	--n;
	return 0;
}

bool dropRowFromArr(int **arr, int &rows, int &columns, int row) {

	if(row < 0 || row > rows) return 0;

	int *temp = *(arr + row);

	//delete [] arr[row];

	for(int i = row; i < rows - 1; ++i) {
		*(arr + i) = *(arr + i + 1);
	}

	--rows;

	//*(arr + rows - 1) = new int[columns];

	*(arr + rows) = temp;

	return 1;
}

bool dropColFromArr(int **arr, int &rows, int &columns, int col) {

	if(col < 0 || col > columns) return 0;

	for(int j = col; j < columns - 1; ++j) {
		for(int i = 0; i < rows; ++i) {
			*(*(arr + i) + j) = *(*(arr + i) + j + 1);
		}
	}

	--columns;

	return 1;
}

bool insertElemInArr(int *arr, int &n, int k) {
	
	if(k < 0 || k > n) return 1;

	for(int i = n; i > k; --i) {
		*(arr + i) = *(arr + i - 1);
	}

	++n;

	return 0;
}

bool insertRowInArr(int **arr, int &rows, int &columns, int row) {

	if(row < 0 || row > rows) return 0;

	int *temp = *(arr + rows);

	for(int i = rows; i > row; --i) {
		*(arr + i) = *(arr + i - 1);
	}

	++rows;

	*(arr + row) = temp;

	return 1;
}

bool insertColInArr(int **arr, int &rows, int &columns, int col) {

	if(col < 0 || col > columns) return 0;

	for(int j = columns; j > col; --j) {
		for(int i = 0; i < rows; ++i) {
			*(*(arr + i) + j) = *(*(arr + i) + j - 1);
		}
	}

	++columns;

	return 1;
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

bool sameAnyDigInNum(int a) {

	while(a) {
		int temp = a % 10;
		int b = a;
		while(b /= 10) {
			if(temp == b % 10) return 1;
		}
		a /= 10;
	}

	return 0;
}

bool haveDig(int a, int dig) {

	a = abs(a);
	dig = abs(dig);

	if(a == dig) return 1;

	while(a) {
		if(dig == a % 10) return 1;
		a /= 10;
	}

	return 0;
}

// Exercise 1/15
int calcArr01(int **arr, int &rows, int &columns) {

	cout << "\tInserting a new row after the row with the first minimum element\n";

	int min_index = 0, min = *(*arr);

	for(int i = 0; i < rows; ++i) {
		for(int j = 0; j < columns; ++j) {
			if(*(*(arr + i) + j) < min) {
				min = *(*(arr + i) + j);
				min_index = i;
			}
		}
	}

	/* for(int i = 0; i < rows; ++i) {
		for(int j = 0; j < columns; ++j) {
			if(*(*(arr + i) + j) == min) {
				if(insertRowInArr(arr, rows, columns, i + 1)) {
					cout << "\n\tInput the numbers for inserted row ";
					int num;
					cin >> num;
					for(int k = 0; k < columns; ++k) {
						*(*(arr + i + 1) + k) = num;
					}
					return 0;
				}
				return 1;
			}
		}
	} */

	if(insertRowInArr(arr, rows, columns, min_index + 1)) {
		cout << "\n\tInput the numbers for inserted row ";
		int num;
		cin >> num;
		for(int k = 0; k < columns; ++k) {
			*(*(arr + min_index + 1) + k) = num;
		}
		return 0;
	}

	return 1;
}

// Exercise 2/15
int calcArr02(int **arr, int &rows, int &columns) {

	cout << "\tInserting a new column after the column without negate element\n";

	for(int j = 0; j < columns; ++j) {
		bool sign = 0;
		for(int i = 0; i < rows; ++i) {
			if(*(*(arr + i) + j) < 0) {
				sign = 1;
				break;
			}
		}
		if(sign) continue;
		if(insertColInArr(arr, rows, columns, j + 1)) {
			cout << "\n\tInput the numbers for inserted column ";
			int num;
			cin >> num;
			for(int k = 0; k < rows; ++k) {
				*(*(arr + k) + j + 1) = num;
			}
			return 0;
		}
	}

	return 1;
}

// Exercise 3/15
int calcArr03(int **arr, int &rows, int &columns) {

	cout << "\tInserting a new row after each row without even element\n";

	for(int i = 0; i < rows; ++i) {
		bool even = 0;
		for(int j = 0; j < columns; ++j) {
			if(*(*(arr + i) + j) % 2 == 0) {
				even = 1;
				break;
			}
		}
		if(even) continue;
		if(insertRowInArr(arr, rows, columns, i + 1)) {
			cout << "\n\tInput the numbers for inserted column ";
			int num;
			cin >> num;
			for(int k = 0; k < columns; ++k) {
				*(*(arr + i + 1) + k) = num;
			}
			++i;
		}
	}

	return 0;
}

// Exercise 4/15
int calcArr04(int **arr, int &rows, int &columns) {

	cout << "\tInserting a new column before the each column with given number\n";

	cout << "\n\tGive the number for compare ";
	int cmp;
	cin >> cmp;

	for(int j = 0; j < columns; ++j) {
		for(int i = 0; i < rows; ++i) {
			if(*(*(arr + i) + j) == cmp) {
				if(insertColInArr(arr, rows, columns, j)) {
					cout << "\n\tInput the numbers for inserted column ";
					int num;
					cin >> num;
					for(int k = 0; k < rows; ++k) {
						*(*(arr + k) + j) = num;
					}
					++j;
				}
				break;
			}
		}
	}

	return 0;
}

// Exercise 5/15
int calcArr05(int **arr, int &rows, int &columns) {

	cout << "\tInserting a new row with zeros after each row without zero\n";

	for(int i = 0; i < rows; ++i) {
		bool zero = 0;
		for(int j = 0; j < columns; ++j) {
			if(*(*(arr + i) + j) == 0) {
				zero = 1;
				break;
			}
		}
		if(zero) continue;
		if(insertRowInArr(arr, rows, columns, i + 1)) {
			for(int k = 0; k < columns; ++k) {
				*(*(arr + i + 1) + k) = 0;
			}
			++i;
		}
	}

	return 0;
}

// Exercise 6/15
int calcArr06(int **arr, int &rows, int &columns) {

	cout << "\tDeleting each row without even elements\n";

	for(int i = rows - 1; i >= 0; --i) {
		bool even = 0;
		for(int j = 0; j < columns; ++j) {
			if(*(*(arr + i) + j) % 2 == 0) {
				even = 1;
				break;
			}
		}
		if(even) continue;
		if(!dropRowFromArr(arr, rows, columns, i)) return 1;
	}

	return 0;
}

// Exercise 7/15
int calcArr07(int **arr, int &rows, int &columns) {

	cout << "\tDeleting each column where first element greater than last one\n";

	for(int j = columns - 1; j >= 0; --j) {
		if(*(*(arr) + j) > *(*(arr + rows - 1) + j)) {
			if(!dropColFromArr(arr, rows, columns, j)) return 1;
		}
	}

	return 0;
}

// Exercise 8/15
int calcArr08(int **arr, int &rows, int &columns) {

	cout << "\tDelete every row where the sum of elements does not exceed a given number\n";
	
	cout << "\n\tGive the number for compare ";
	int num;
	cin >> num;

	for(int i = rows - 1; i >= 0; --i) {
		int sum = 0;
		for(int j = 0; j < columns; ++j) {
			sum += *(*(arr + i) + j);
		}
		if(sum <= num) continue;
		if(!dropRowFromArr(arr, rows, columns, i)) return 1;
	}

	return 0;
}

// Exercise 9/15
int calcArr09(int **arr, int &rows, int &columns) {

	cout << "\tRemove all columns where the number of odd elements is even\n";

	for(int j = columns - 1; j >= 0; --j) {
		int cnt = 0;
		for(int i = 0; i < rows; ++i) {
			if(*(*(arr + i) + j) % 2) ++cnt;
		}
		if(cnt % 2) continue;
		if(!dropColFromArr(arr, rows, columns, j)) return 1;
	}

	return 0;
}

// Exercise 10/15
int calcArr10(int **arr, int &rows, int &columns) {

	cout << "\tDelete every row where every element fall in a given interval\n";
	
	cout << "\n\tGive the two number for interval ";
	int a, b;
	cin >> a >> b;

	if(a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	for(int i = rows - 1; i >= 0; --i) {
		bool out = 0;
		for(int j = 0; j < columns; ++j) {
			if(*(*(arr + i) + j) < a || *(*(arr + i) + j) > b) {
				out = 1;
				break;
			}
		}
		if(out) continue;
		if(!dropRowFromArr(arr, rows, columns, i)) return 1;
	}

	return 0;
}

// Exercise 11/15
int calcArr11(int **arr, int &rows, int &columns) {

	cout << "\tRemove all columns where all elements are positive\n";

	for(int j = columns - 1; j >= 0; --j) {
		bool neg = 0;
		for(int i = 0; i < rows; ++i) {
			if(*(*(arr + i) + j) <= 0) {
				neg = 1;
				break;
			}
		}
		if(neg) continue;
		if(!dropColFromArr(arr, rows, columns, j)) return 1;
	}

	return 0;
}

// Exercise 12/15
int calcArr12(int **arr, int &rows, int &columns) {

	cout << "\tDelete all rows where the arithmetic mean of the elements is a two-digit number\n";

	for(int i = rows - 1; i >= 0; --i) {
		double aver = 0;
		for(int j = 0; j < columns; ++j) {
			aver += *(*(arr + i) + j);
		}
		aver /= columns;
		if(aver < 10 || aver >= 100) continue;
		if(!dropRowFromArr(arr, rows, columns, i)) return 1;
	}

	return 0;
}

// Exercise 13/15
int calcArr13(int **arr, int &rows, int &columns) {

	cout << "\tRemoving the row and column at the intersection of which is the minimum element\n";

	int min = *(*(arr));
	int min_index[] = {0, 0};

	for(int i = 0; i < rows; ++i) {
		for(int j = 0; j < columns; ++j) {
			if(*(*(arr + i) + j) < min) {
				min = *(*(arr + i) + j);
				min_index[0] = i;
				min_index[1] = j;
			}
		}
	}

	cout << "\n\tMinimum number is " << min << " on the ARRAY[" << min_index[0] << "][" << min_index[1] << "]\n";

	if(!dropRowFromArr(arr, rows, columns, min_index[0])) return 1;
	if(!dropColFromArr(arr, rows, columns, min_index[1])) return 1;

	return 0;
}

// Exercise 14/15
int calcArr14(int **arr, int &rows, int &columns) {

	cout << "\tRemoving row and column with matching values\n";

	string err = "\tTable is missing rows and columns with matching values\n";

	if(rows != columns) {
		cout << err;
		return 1;
	}

	for(int i = rows - 1; i >= 0; --i) {
		for(int j = columns - 1; j >= 0; --j) {
			bool mis = 0;
			for(int k = rows - 1; k >= 0; --k) {
				//cout << "\t[" << i << "][" << k << "] : [" << k << "][" << j << "]\n";
				if(*(*(arr + i) + k) != *(*(arr + k) + j)) {
					cout << "\t[" << i << "][" << k << "] != [" << k << "][" << j << "]\n";
					mis = 1;
					break;
				}
			}
			//cout << endl;
			if(mis) continue;
			if(!dropRowFromArr(arr, rows, columns, i)) return 1;
			if(!dropColFromArr(arr, rows, columns, j)) return 1;
			--i;
		}
		//cout << endl;
	}

	return 0;
}

// Exercise 15/15
int calcArr15(int **arr, int &rows, int &columns) {

	cout << "\tRemoving null rows and columns from an array\n";

	for(int i = rows - 1; i >= 0; --i) {
		bool not_null = 0;
		for(int j = 0; j < columns; ++j) {
			if(*(*(arr + i) + j)) {
				not_null = 1;
				break;
			}
		}
		if(not_null) continue;
		if(!dropRowFromArr(arr, rows, columns, i)) return 1;
	}

	for(int j = columns - 1; j >= 0; --j) {
		bool not_null = 0;
		for(int i = 0; i < rows; ++i) {
			if(*(*(arr + i) + j)) {
				not_null = 1;
				break;
			}
		}
		if(not_null) continue;
		if(!dropColFromArr(arr, rows, columns, j)) return 1;
	}

	return 0;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 6, VI\n\n";

	const int exNum = 15;
	int mode;
	string exerHead = "Inserting and deleting rows or/and columns in a table";
	int (*calcArr[])(int**, int &, int &) = {calcArr01, calcArr02, calcArr03, calcArr04, calcArr05, 
											calcArr06, calcArr07, calcArr08, calcArr09, calcArr10, 
											calcArr11, calcArr12, calcArr13, calcArr14, calcArr15};

	do{
		cout << "\n\n\tPlease choise the number from 0 to " << exNum << "\n";
		cout << "\n\t\t0 \t- Exit\n";

		for(int i = 1; i <= exNum; ++i) {
			cout << "\t\t" << i << " \t- " << exerHead << " " << i << "\n";
		}

		cout << "\t";
		cin >> mode;

		if(mode > 0 && mode <= exNum) {
			cout << "\n\t" << exerHead << " " << mode << "/" << exNum << "\n";
			
			int m = 11, n = 13, x = 0;
			int **arr = createArray(m * 2, n * 2);
			
			for(int i = 0; i < m; ++i) {
				for(int j = 0; j < n; ++j) {
					*(*(arr + i) + j) = i % 2 * j % 2;
					//cin >> *(*(arr + i) + j);
				}
			}
			
			printArray(arr, m, n);
			
			cout << "\n\tResult:\n\n";
			
			x = calcArr[mode - 1](arr, m, n);
			
			printArray(arr, m, n);
			
			if(x) cout << "\t" << "Error" << "\n\n";
			
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