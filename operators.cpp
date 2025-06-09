#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int a , b;
    cout<<" enter a -> "<<" ";
    cin>>a;
    cout<<" Enter b -> "<<" ";
    cin>>b;
    cout<<" ---------- Arithemetic Operations --------- "<<endl;
    cout<<" Addition = "<<a+b<<" Subtraction = "<<a-b<<endl;
    cout<<" Multiplication = "<<a*b<<" Division = "<<a/b<<endl;
    cout<<" Reminder = "<<a%b<<" Power = "<<pow(a,b)<<endl;
    cout<<" ---------------------------------------------- "<<endl;

    // Questions 2 ) 
    int number;
    cout<<" Enter the Number -> "<<" ";
    cin>>number;
    if(number >= 1 && number <=100 ){
        cout<<" Yes "<<endl;
    }
   else{
    cout<<" No "<<endl;
   } 


   int x = 10;
   
   cout<< ++x <<endl;

   cout<< ! true <<endl; // Not operator # output will be 0
   cout << true <<endl;   // Output will be 1 

   // ternary operator -> It is the shorthand of if else statements 


   int age;
   cout<<" Enter the age : "<<" ";
   cin>>age;
   age >= 18 ? cout<<"Vote" : cout<<" Can't Vote";

int q = 10;
q = q+1; // post increment ->  first use then update 
cout<< q + 5 <<endl;
cout<<q<<endl;

int p = 6;  
++p;  // pre Increment -> First update then use 
cout<< p + 5 <<endl;
cout<<p<<endl;
 
    return 0;
}