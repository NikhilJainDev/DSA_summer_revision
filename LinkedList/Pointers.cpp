#include<iostream>
#include<vector>
#include<list> // Part of the STL Library 
using namespace std;

void changeX(int * ptr){ // Passed By reference 
    * ptr = 48;
}


int main(){

int a = 10;
cout<<" Memory Address of a variable is : "<<&a<<endl;

int * ptr = & a;

cout<<" Address of a stored in pointer variable is : "<<ptr<<endl;
cout<<" Value of variable a is : "<<*ptr<<endl;

int x = 40;
changeX(&x);


cout<<" Change inside x then value is : "<< x <<endl;

vector<int> arr  = {1,2,3,4,5};

arr[2] = 10;

for(int el : arr){
    cout<<el<<" ";
}

cout<<endl;

const vector<int> vec = {1,2,5,8,9};

// vec[3] = 18; // we cant modify / assign value to the const values 

for(int el : vec){
    cout<<el<<" ";
}

    return 0;
}