#include<iostream>
#include<list> // Part of the STL Library 
using namespace std;

int main(){

int a = 10;
cout<<" Memory Address of a variable is : "<<&a<<endl;

int * ptr = & a;

cout<<" Address of a stored in pointer variable is : "<<ptr<<endl;
cout<<" Value of variable a is : "<<*ptr<<endl;

    return 0;
}