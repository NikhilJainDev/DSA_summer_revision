#include<iostream>
using namespace std;
int main(){

     int a = 10;
    cout<<" value of a is : "<<a<<endl;
    a = a+ 1;
    cout<<" Updated a is : "<<a<<endl;

    const int b = 11;
   //  b = b + 1;   There can't be updation in b 

   // Swapping of two Numbers 
   int x = 10;
   int y = 20;
   int temp;

   cout<<" Before swapping : "<<"x = "<<x<<" y = "<<y<<endl;
   temp = x;
   x = y;
   y = temp;
   cout<<" After Swapping : "<<" x = "<<x<<" y = "<<temp<<endl;


   // Take two variables of different data types and perform arithemetc operations on it 

   int p = 15;
   float q = 5.2;
   cout<<" ---------- Results are ------------- "<<endl;
   cout<<" Addition = "<<p+q<<endl;
   cout<<" Subtraction = "<<p-q<<endl;
   cout<<" Multiplication = "<<p*q<<endl;
   cout<<" Division = "<<p/q<<endl;
   cout<<" ------------------------------------ "<<endl;

   cout<<" --------------- Temperature Conversion Calculator ------------- "<<endl;

   int celcius;
   float frehnite, kelvin;

   cout<<" Enter Celcius : "<<" ";
   cin>>celcius;
   frehnite =  9/5 * (celcius) + 32;
    kelvin = celcius + 273.15;

    cout<<" Frehnite = "<<frehnite<<endl;
    cout<<" Kelvin   = "<<kelvin<<endl;


    // Type casting and type conversion 
    
    return 0;


}