#include<iostream>
using namespace std;
class Parent{
    public:
    void SayHello(){
        cout<<" Hello From PArent class "<<endl;
    }
};

class Child : public Parent{
    public:
    void SayHello(){
        cout<<" Hello From Child Class "<<endl;
    }
};


int main(){
    Child ch;
    ch.SayHello();
    return 0;
}