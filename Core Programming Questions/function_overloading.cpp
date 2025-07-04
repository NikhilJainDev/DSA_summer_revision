#include<iostream>
using namespace std;
// Function Overloading 

void Greet(string name){
    cout<<" Good Morning "<<name<<endl;
}

void Greet(float time){
    cout<<" GM my little champ wake up at "<<time<<endl;
}

int main(){
    Greet(7.50);
    return 0;
}