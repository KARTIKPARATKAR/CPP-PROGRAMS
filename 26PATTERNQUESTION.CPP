//Draw the following patterns specified
#include<iostream>
using namespace std;

int main() {
    int i, j;
    cout << "Give the number of rows and columns of the array: " << endl;
    cin >> i >> j;
    cout << "Enter " << i * j << " values into the array: " << endl;
    int arr[i][j];

    // Input array elements
    for (int k = 0; k < i; k++) {
        for (int m = 0; m < j; m++) {
            cin >> arr[k][m];
        }
    }

    // Print the original array
    cout << "Your array is: " << endl;
    for (int k = 0; k < i; k++) {
        for (int m = 0; m < j; m++) {
            cout << arr[k][m] << " ";
        }
        cout << endl;
    }

    // Print the left-bottom-right angle shape of the given 2D array
    cout << "Printing the left-bottom-right angle shape of the given 2D array: " << endl;
    for (int k = 0; k < i; k++) {
        for (int m = 0; m < j; m++) {
            if (k >= m) {
                cout << arr[k][m] << " ";
            }
        }
        cout << endl;
    }

    // Print the right-top-right angle shape of the given 2D array
    cout << "Printing the right-top-right angle shape of the given 2D array: " << endl;
    for (int k = 0; k < i; k++) {
        for (int m = 0; m < j; m++) {
            if (m >= (j - k - 1)) {
                cout << arr[k][m] << " ";
            } else {
                cout << "  "; // Print spaces for the empty spaces in the triangle
            }
        }
        cout << endl;
    }

    return 0;
}
