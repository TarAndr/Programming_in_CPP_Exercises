// Programming on C++
// Exercises
// Chapter 6, V
// Inserting and deleting elements in a one-dimensional array

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

bool insertElemInArr(int *arr, int &n, int k) {
	
	if(k < 0 || k > n) return 1;

	for(int i = n; i >= k; --i) {
		*(arr + i + 1) = *(arr + i);
	}

	++n;

	return 0;
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
int calcArr01(int *arr, int &n) {
	
	cout << "\tRemoving all even numbers\n";

	for(int i = 0; i < n; ++i) {
		if(*(arr + i) % 2) continue;
		if(!dropElemFromArr(arr, n, i)) --i;
	}

	return 0;
}

// Exercise 2/15
int calcArr02(int *arr, int &n) {
	
	cout << "\tRemoving all maximum elements\n";

	int max = *(arr);
	
	for(int i = 0; i < n; ++i) {
		if(*(arr + i) > max) max = *(arr + i);
	}

	for(int i = 0; i < n; ++i) {
		if(*(arr + i) != max) continue;
		if(!dropElemFromArr(arr, n, i)) --i;
	}

	return 0;
}

// Exercise 3/15
int calcArr03(int *arr, int &n) {
	
	cout << "\tRemoving numbers that fall within an interval\n";

	cout << "\n\tInput two number for interval \"a\" and \"b\"\n";
	int a, b;
	cin >> a >> b;
	
	if(a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	
	for(int i = 0; i < n; ++i) {
		if(*(arr + i) < a || *(arr + i) > b) continue;
		if(!dropElemFromArr(arr, n, i)) --i;
	}

	return 0;
}

// Exercise 4/15
int calcArr04(int *arr, int &n) {
	
	cout << "\tRemoving elements with a given last digit\n";

	cout << "\n\tInput last digit of elements for removing\n";
	int a;
	cin >> a;
	
	if(a < 0 || a > 9) {
		cout << "\tNumber is wrong\n";
		return 1;
	}
	
	for(int i = 0; i < n; ++i) {
		if(*(arr + i) % 10 != a) continue;
		if(!dropElemFromArr(arr, n, i)) --i;
	}

	return 0;
}

// Exercise 5/15
int calcArr05(int *arr, int &n) {
	
	cout << "\tDeleting elements with numbers from k1 to k2\n";

	cout << "\n\tInput two number \"k1\" and \"k2\"\n";
	int k1, k2;
	cin >> k1 >> k2;
	
	if(k1 > k2) {
		int temp = k1;
		k1 = k2;
		k2 = temp;
	}
	
	if(k1 < 1) k1 = 1;
	if(k2 > n) k2 = n;
	
	for(int i = 0; i <= k2 - k1; ++i) {
		if(dropElemFromArr(arr, n, k1 - 1)) return 1;
	}

	return 0;
}

// Exercise 6/15
int calcArr06(int *arr, int &n) {
	
	cout << "\tInsert element before first negative\n";
	
	for(int i = 0; i < n; ++i) {
		if(*(arr + i) < 0) {
			if(!insertElemInArr(arr, n, i)) {
				cout << "\n\tInput element for ARRAY[" << i << "] ";
				cin >> *(arr + i);
				return 0;
			}
		}
	}

	cout << "\n\tElement can't inserted\n";

	return 1;
}

// Exercise 7/15
int calcArr07(int *arr, int &n) {
	
	cout << "\tInsert element after last positive\n";
	
	for(int i = n - 1; i >= 0; --i) {
		if(*(arr + i) > 0) {
			if(!insertElemInArr(arr, n, i + 1)) {
				cout << "\n\tInput element for ARRAY[" << i + 1 << "] ";
				cin >> *(arr + i + 1);
				return 0;
			}
		}
	}

	cout << "\n\tElement can't inserted\n";

	return 1;
}

// Exercise 8/15
int calcArr08(int *arr, int &n) {
	
	cout << "\tInsert element before every even elements\n";
	
	for(int i = 0; i < n; ++i) {
		if(*(arr + i) % 2) continue;
		if(!insertElemInArr(arr, n, i)) {
			cout << "\n\tInput element for ARRAY[" << i << "] ";
			cin >> *(arr + i);
			++i;
		}
	}

	return 0;
}

// Exercise 9/15
int calcArr09(int *arr, int &n) {
	
	cout << "\tInsert an element after each ending with a given digit\n";

	cout << "\n\tInput last digit ";
	int dig;
	cin >> dig;
	
	if(dig < 0 || dig > 9) {
		cout << "\n\tDigit must be from 0 to 9\n";
		return 1;
	}

	for(int i = 0; i < n; ++i) {
		if(abs(*(arr + i) % 10) != dig) continue;
		if(!insertElemInArr(arr, n, i + 1)) {
			cout << "\n\tInput element for ARRAY[" << i + 1 << "] ";
			cin >> *(arr + i + 1);
			++i;
		}
	}

	return 0;
}

// Exercise 10/15
int calcArr10(int *arr, int &n) {
	
	cout << "\tInserting an element after each multiple of its number\n";

	for(int i = 0; i < n; ++i) {
		if(*(arr + i) % (i + 1)) continue;
		if(!insertElemInArr(arr, n, i + 1)) {
			cout << "\n\tInput element for ARRAY[" << i + 1 << "] ";
			cin >> *(arr + i + 1);
			++i;
		}
	}

	return 0;
}

// Exercise 11/15
int calcArr11(int *arr, int &n) {
	
	cout << "\tRemoving elements with different all digits in numbers\n";
	
	for(int i = 0; i < n; ++i) {
		if(sameAnyDigInNum(*(arr + i))) continue;
		if(!dropElemFromArr(arr, n, i)) --i;
	}

	return 0;
}

// Exercise 12/15
int calcArr12(int *arr, int &n) {
	
	cout << "\tRemoving duplicates\n";
	
	for(int i = 0; i < n - 1; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if(*(arr + i) != *(arr + j)) continue;
			if(!dropElemFromArr(arr, n, j)) --j;
		}
	}

	return 0;
}

// Exercise 13/15
int calcArr13(int *arr, int &n) {
	
	cout << "\tInsert element after each maximum\n";
	
	int max = *(arr);
	
	for(int i = 0; i < n; ++i) {
		if(*(arr + i) > max) max = *(arr + i);
	}
	
	for(int i = n - 1; i >= 0; --i) {
		if(*(arr + i) == max) {
			if(!insertElemInArr(arr, n, i + 1)) {
				cout << "\n\tInput element for ARRAY[" << i + 1 << "] ";
				cin >> *(arr + i + 1);
			} else {
				cout << "\n\tElement can't inserted\n";
			}
		}
	}

	return 0;
}

// Exercise 14/15
int calcArr14(int *arr, int &n) {
	
	cout << "\tInsert an element before each having a given digit\n";

	cout << "\n\tInput the digit ";
	int dig;
	cin >> dig;
	
	if(dig < 0 || dig > 9) {
		cout << "\n\tDigit must be from 0 to 9\n";
		return 1;
	}

	for(int i = 0; i < n; ++i) {
		if(!haveDig(*(arr + i), dig)) continue;
		if(!insertElemInArr(arr, n, i)) {
			cout << "\n\tInput element for ARRAY[" << i << "] ";
			cin >> *(arr + i);
			++i;
		}
	}

	return 0;
}

// Exercise 15/15
int calcArr15(int *arr, int &n) {
	
	cout << "\tInserting elements between pairs with different signs\n";

	for(int i = 0; i < n - 1; ++i) {
		if((*(arr + i) <= 0 && *(arr + i + 1) <= 0) || (*(arr + i) >= 0 && *(arr + i + 1) >= 0)) continue;
		if(!insertElemInArr(arr, n, i + 1)) {
			cout << "\n\tInput element for ARRAY[" << i + 1 << "] ";
			cin >> *(arr + i + 1);
			++i;
		}
	}

	return 0;
}

int main() {
	cout << "\n\t\tTarAndr C++ Exercises, Chapter 6, V\n\n";

	const int exNum = 15;
	int mode;
	string exerHead = "Inserting and deleting elements in a one-dimensional array";
	int (*calcArr[])(int*, int &) = {calcArr01, calcArr02, calcArr03, calcArr04, calcArr05, 
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
			
			int n = 11, x = 0;
			int *arr = createArray(n * 2);
			
			for(int i = 0; i < n; ++i) {
				*(arr + i) = (i - 3) * (i + 6) * (9 - i);
				//cin >> *(arr + i);
			}
			
			printArray(arr, n);
			
			cout << "\n\tResult:\n\n";
			
			x = calcArr[mode - 1](arr, n);
			
			printArray(arr, n);
			
			if(x) cout << "\t" << "Error" << "\n\n";
			
			deleteArray(arr);
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