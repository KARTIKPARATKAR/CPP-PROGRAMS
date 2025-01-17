//Find the pair of elements in an array whose difference is a perticular value.
//Array elements will be given and difference is given.
//We just have to tell the two numbers having difference equal to the given number
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int array[] = {0, 3, 1, 2, 3, 4, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int d;

    cout << "Give difference: ";
    cin >> d;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (abs(array[i] - array[j]) == d) {
                cout << "Pair found: (" << array[i] << "," << array[j] << ")" << endl;
                break;
            }
        }
    }

    return 0;
}
