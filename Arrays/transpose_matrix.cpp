#include<iostream>
#include<vector>
using namespace std;

int main(){
    int row, column;
    cout<<" Row : "<<" ";
    cin>>row;
    cout<<"Enter Column "<<" ";
    cin>>column;
    int matrix[row][column];
    cout<<" Enter the Elements of Matrix "<<" ";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"---------- Matrix is : -------------------"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // Applying the transpose logic 

    int transpose_matrix[column][row];

    for(int i=0; i<column; i++){
        for(int j=0; j<row; j++){
            transpose_matrix[i][j] = matrix[j][i];
        }
    }

    cout<<" Transpose matrix is : "<<endl;
    // Printing the transpose Matrix 
    for(int i=0; i<column; i++){
        for(int j=0; j<row; j++){
            cout<<transpose_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}