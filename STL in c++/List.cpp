#include<iostream>
#include<list>
using namespace std;
int main(){
    list<string> lst;
    // Push Back function in List 
    lst.push_back(" Nikhil Jain ");
    lst.push_back(" Nikhil Kumar ");
    lst.push_back(" Aditya Rahar ");
    lst.push_back(" Harsh Meena ");

    for(string el : lst){
        cout<<el<<" ";
        cout<<endl;
    }

    cout<<" --------------- Updated list ---------- "<<endl;
    // Push Front Function in List 
    lst.push_front(" Tanishka Modi ");
    lst.push_front(" Uzma Parveen ");

    for(string el : lst){
        cout<<el<<" ";
        cout<<endl;
    }


    return 0;
}