#include<iostream>
using namespace std;

void Pattern_1(){
    int num = 1;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            cout<<num<<" ";
            num ++;
        }
        cout<<endl;
    }
}

void pattern_2(){
    char ch = 'A';
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
}

void triangle_pattern(){
    for(int i=1; i<=4; i++){
        for(int x=1; x<=i; x++){
            cout<<" * "<<" ";
        }
        cout<<endl;
    }
}

void reverse_trinagle_pattern(){
    for(int i=4; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<" * "<<" ";
        }
        cout<<endl;
    } 
}

void pattern_3(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    Pattern_1();
    cout<<"-------------------"<<endl;
    pattern_2();
    cout<<"-------------------"<<endl;
    triangle_pattern();
    cout<<"-------------------"<<endl;
    reverse_trinagle_pattern();
    cout<<"-------------------"<<endl;
    pattern_3();
     cout<<"-------------------"<<endl;



    return 0;
}