#include<iostream>
using namespace std;
/*
//task 2
class point {
	int x;
	int y;

public:
	point(){}
	point(int a, int b) {
		x = a;
		y = b;
	}
	void setX(int xx) {

	}
	int getX() {
		return x;
	}

	void setY(int yy) {
		y = yy;
	}
	int getY() {
		return y;
	}

	void distance(int x, int y) {
		return x - y;
	}

};
/*
int main() {
	//task 1
	int day;
	int month;
	 int year;

	 cout << "enter day, month, year " << endl;
	 cin >> day >> month >> year;

	 cout << "day: " << day << " month: " << month << " year: " << year << endl;

	 //tassk 2
	 point p;
	 p.distance(2, 1);

	 return 0;

}
*/
//task 3
/*
// Function to input elements 
void inputMatrix(int A[][5], int m, int n) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
}

// Function to display elements 
void displayMatrix(int A[][5], int m, int n) {
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

//  sum of all elements 
int sumOfMatrix(int A[][5], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += A[i][j];
        }
    }
    return sum;
}

// row-wise sum 
void rowSum(int A[][5], int m, int n) {
    cout << "Row-wise sum of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += A[i][j];
        }
        cout << "Sum of Row " << i + 1 << ": " << rowSum << endl;
    }
}

// column-wise sum 
void columnSum(int A[][5], int m, int n) {
    cout << "Column-wise sum of the matrix:" << endl;
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += A[i][j];
        }
        cout << "Sum of Column " << j + 1 << ": " << colSum << endl;
    }
}

// transpose 
void transposeMatrix(int A[][5], int m, int n) {
    int B[5][5];
    cout << "Transpose of the matrix:" << endl;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            B[j][i] = A[i][j];
        }
    }
    displayMatrix(B, n, m);
}

int main() {
    int m, n;
    cout << "Enter the number of rows ";
    cin >> m;
    cout << "Enter the number of columns ";
    cin >> n;

    int A[5][5];

    int choice;
    do {
        cout << "\nMatrix Operations Menu:" << endl;
        cout << "1. Input elements into matrix\n";
        cout << "2. Display elements of matrix\n";
        cout << "3. Sum of all elements of matrix\n";
        cout << "4. Display row-wise sum of matrix\n";
        cout << "5. Display column-wise sum of matrix\n";
        cout << "6. Create transpose of matrix\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputMatrix(A, m, n);
            break;
        case 2:
            displayMatrix(A, m, n);
            break;
        case 3:
            cout << "Sum of all elements of matrix: " << sumOfMatrix(A, m, n) << endl;
            break;
        case 4:
            rowSum(A, m, n);
            break;
        case 5:
            columnSum(A, m, n);
            break;
        case 6:
            transposeMatrix(A, m, n);
            break;
        case 0:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 0);

    return 0;
}
*/