#include <iostream>
using namespace std;

const int max_rows = 3;
const int max_cols = 3;

void addMatrices(int matrix1[][max_cols], int matrix2[][max_cols], int resultMatrix[][max_cols]){

    for (int i=0; i<max_rows; i++){
        for (int j=0; j<max_cols; j++){
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void traverse(int arr[][max_cols], int rows, int cols){

    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout <<arr[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main(){

    int matrix1[max_rows][max_cols] = {{3, 6, 8}, 
                                       {1, 7, 0}, 
                                       {9, 1, 4}};
    int matrix2[max_rows][max_cols] = {{1, 6, 8}, 
                                       {8, 7, 8}, 
                                       {0, 6, 4}};

    int resultMatrix[max_rows][max_cols];

    addMatrices(matrix1, matrix2, resultMatrix);

    cout << "Matrix 1:" << endl;
    traverse(matrix1, max_rows, max_cols);

    cout << "\nMatrix 2:" << endl;
    traverse(matrix2, max_rows, max_cols);

    cout << "\nMatrix Sum:" << endl;
    traverse(resultMatrix, max_rows, max_cols);

    return 0;
}