#include<iostream>
using namespace std;

void Pattern_1(){
    for(int i=1; i<=4; i++){
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern_2(){
    int num = 1;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num = num + 1;
        }
        cout<<endl;
    }
}

int main(){
    Pattern_1();
    cout<<"-----------------"<<endl;
    pattern_2();
return 0;
}