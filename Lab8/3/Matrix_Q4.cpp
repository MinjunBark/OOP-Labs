#include <iostream> 
#include <vector>
#include <time.h>
#include "Sortable.h"
// #include "Matrix.h"
using namespace std;


void printMatrix(vector<vector<int> >tempMatrix){
    for(int i = 0; i < tempMatrix.size(); i++){
        for(int j = 0; j < tempMatrix[i].size(); j++){
            cout << tempMatrix[i][j] << " ";
        }
        cout << endl;
    }
}


// bool ResizeMatrix(int row){

// }

int main(){
    int row ;
    int column ;
    cout << "Enter row: " << endl;
    cin >> row;
    cout << "Enter column: " << endl;
    cin >> column;

    srand(time(0)); //for random generator

    //creates the matrix
    // Sortable
    vector<vector<int> > matrix(row, vector<int> (column, 0));
    
    //random generator for matrix (1-10)
    for(int i_row = 0; i_row < matrix.size(); i_row++){
        for(int j_col = 0; j_col < matrix[i_row].size(); j_col++){
            matrix[i_row][j_col] = rand() % 10;
        }
    }

    cout << "Before sorting: " << endl;
    printMatrix(matrix);

    //problem: 1) it is not sorting all of the elements in matrix 

    cout << "After sorting: " << endl;
    // matrix.sort();
    sort(matrix.begin(),matrix.end());
    printMatrix(matrix);
    //added------------------------------
    // Sortable<int> tempMatrix;
    // int s;

    // for(int i = 0; i < matrix.size(); i++){
    //     for(int j = 0 ; j < matrix[i].size(); j++){
    //         tempMatrix[s] = matrix[i][j];
    //     }
    // }
    //
    // tempMatrix.sort();
    // printSortMatrix(tempMatrix);
   // ---------------------------------------------------------------

    //problem: 1) resize should print the amount of elements in matrix 
                //2) wont print the correct amount of rows 

    // int resizer;
    // cout << "Enter resize of row: "<< endl;
    // cin >> resizer;
    // cout << "New Row size: " << resizer << endl;
    // matrix.resize(row, vector<int>(column,resizer));
    // printMatrix(matrix);
    

    return 0;
}

