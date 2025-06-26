#include<iostream>
#include<vector>
using namespace std;

int main(){
   int n;
   cout<<" Enter n : "<<" ";
   cin>>n;
   int matrix[n][n];
    cout<<" Enter the Elements of Matrix "<<" ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    // printing 

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Not an Optimal Approach We haven't use extra Array only solve using this given array 
    
    int ans[n][n];
    // Rotate by 90 degree 
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            ans[j][n-i-1] = matrix[i][j];
        }
    }

     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}