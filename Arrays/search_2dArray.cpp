#include<iostream>
#include<vector>
using namespace std;

int main(){
    int row, column, target;
    bool isFound = false;
    cout<<" Enter the Rows : "<<" ";
    cin>>row;
    cout<<" Enter the Columns : "<<" ";
    cin>>column;
    int arr[row][column];
    cout<<" Enter the Elements of the Matrix : "<<" ";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>arr[i][j];
        }
    }
    cout<<" Enter the target value "<<" ";
    cin>>target;
    // Found inside the 2d Matrix 
    for(int x = 0; x<row; x++){
        for(int y = 0; y<column; y++){
            if(arr[x][y] ==target){
                isFound = true;
            }
        }
    }
    if(isFound  == true){
        cout<<" Element found "<<" ";
    }
    else{
        cout<<" Element Not found "<<" ";
    }

    return 0;
}