#include <iostream>
using namespace std;

const int r1 = 2, c1 = 2, r2 = 2, c2 = 2;


void matrixMultiplication(int mat1[][c1], int mat2[][c2], int res[][c2]){

    for (int i=0; i<r1; i++){
        for (int j=0; j<c2; j++){
            res[i][j] = 0;
            for (int k=0; k<r2; k++){
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void traverse(int arr[][c2], int rows, int cols){

    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout <<arr[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
}


int main(){

    int mat1[r1][c1] = {{1, 2}, 
                        {5, 4}};
    int mat2[r2][c2] = {{5, 6}, 
                        {0, 3}};
    int res[r1][c2];

    traverse(mat1, r1, c1);
    traverse(mat2, r2, c2);

    matrixMultiplication(mat1, mat2, res);

    traverse(res, r1, c2);

    return 0;

}