#include <iostream>
using namespace std;

void printarray(int arr[][20], int sizeRow, int sizeCol) {
    for (int i = 0; i < sizeRow; i++) {
        for (int j = 0; j < sizeCol; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void returnTranspose(int arr[][20], int sizeRow, int sizeCol) {
    for (int i = 0; i < sizeRow; i++) {
        for (int j = 0; j < sizeCol; j++) {
            if(i>j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
    printarray(arr, sizeRow, sizeCol);
}

int main() {
    int array[20][20];
    cout << "Enter row size and column size: ";
    int Row, Col;
    cin >> Row >> Col;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Col; j++) {
            cin >> array[i][j];
        }
    }
      for (int i = 0; i < sizeRow; i++) {
        for (int j = 0; j < sizeCol; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    returnTranspose(array, Row, Col);

    return 0;
}
