#include<iostream>
using namespace std;
int main(){

      int row, column;
    cout<<" Enter Row     -> "<<" ";
    cin>>row;
    cout<<" Enter Column  -> "<<" ";
    cin>>column;
    int arr[row][column];
    cout<<" Enter Elements in Matrix : "<<" "<<" ";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    cout<<" Printing Elements in the Matrix "<<endl;

    for(int x= 0; x<row; x++){
        for(int y=0; y<column; y++){
            cout<<arr[x][y]<<" ";
        }
        cout<<endl;
    }


    

    return 0;
}