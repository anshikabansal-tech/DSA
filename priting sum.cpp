#include <iostream>
using namespace std;
int main() {
    int arr[10][10];
    int rows, cols, i, j, sum = 0;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    cout << "Enter elements of the matrix:\n";
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];  
        }
    }
    cout << "Sum of all elements = " << sum << endl;

    return 0;
}

