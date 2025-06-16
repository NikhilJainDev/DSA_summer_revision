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
   

    return 0;
}