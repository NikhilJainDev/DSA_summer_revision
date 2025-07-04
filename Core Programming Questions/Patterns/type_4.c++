#include<iostream>
using namespace std;

void inverted_triangle(){
    int n = 4;
    for(int i=0; i<n; i++){
        // spaces printing 
        for(int j= 0; j<i; j++){
            cout<<" ";
        }
        // printing numbers 
        for(int j = 0; j<n-i; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}


void Pyramid_pattern(){
    int n = 4;
    for(int i=0; i<n; i++){
        //spaces n-i-1
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //nums
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }
        //nums
        for(int j= i; j>=1; j--){
            cout<< j;
        }

        cout<<endl;
    }
}



int main(){

    inverted_triangle();
    cout<<"--------------------------"<<endl;
    Pyramid_pattern();
   



    return 0;
}