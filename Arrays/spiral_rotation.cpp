#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int row, column;
    cout<<" Enter the Row "<<" ";
    cin>>row;
    cout<<" Enter the Column "<<" ";
    cin>>column;
    int arr[row][column];
    cout<<"Enter the Elements of Array : "<<" ";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>arr[i][j];
        }
    }
cout<<endl;
    cout<<" Matrix is : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // Logic of Spiral Rotation 
    int top = 0, right = column - 1, bottom = row - 1 , left = 0;

    while(top <= bottom && left <= right){
        for(int i= left; i<=right; i++){
            cout<<arr[top][i]<<" ";
        }
        top ++;
        for(int i = top; i<=bottom; i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        for(int i=right; i>=left; i--){
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;
        for(int i=bottom; i>=top; i--){
            cout<<arr[i][left]<<" ";
        }
        left ++;
    }

    return 0;
}