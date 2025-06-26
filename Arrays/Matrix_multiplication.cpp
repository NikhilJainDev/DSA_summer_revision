#include<iostream>
#include<vector>
using namespace std;

int main(){
int r1, c1, r2, c2;
cout<<" Enter r1" <<" ";
cin>>r1;
cout<<" Enter c1 "<<" ";
cin>>c1;
int A[r1][c1];

cout<<" Enter the Elements of A "<<" ";
for(int i=0; i<r1; i++){
    for(int j=0; j<c1; j++){
        cin>>A[i][j];
    }
}

cout<<" Enter r2"<<" ";
cin>>r2;
cout<<" Enter c2 "<<" ";
cin>>c2;
int B[r2][c2];

cout<<" Enter the Elements of B "<<" ";
for(int i=0; i<r2; i++){
    for(int j=0; j<c2; j++){
        cin>>B[i][j];
    }
}

// Printing Matrix A & Matrix B 

for(int x=0; x<r1; x++){
    for(int y = 0; y<c1; y++){
        cout<<A[x][y]<<" ";
    }
    cout<<endl;
}

printf("\n");

for(int x=0; x<r2; x++){
    for(int y = 0; y<c2; y++){
        cout<<B[x][y]<<" ";
    }
    cout<<endl;
}
cout<<endl;
// Applying Multiplication Logic 

if(c1 != r2){
    cout<<" Matrix Multiplication Not Possible "<<endl;
}

else{

    int C[r1][c2];

for(int i = 0; i<r1; i++){
    for(int j = 0; j<c2; j++){
        int ans = 0;
        for(int k=0; k<c1; k++){
            ans = ans + A[i][k] * B[k][j];
        }
        C[i][j] = ans;
    }
}

cout<<" Matrix Multiplication is : "<<endl;
for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
}
    
}

    return 0;
}