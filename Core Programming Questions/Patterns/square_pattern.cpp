#include<iostream>
using namespace std;

void square_pattern(){
   for(int j=1; j<=4; j++){
     for(int i=1; i<=4; i++){
        cout<< i <<" "; // 1 2 3 4
    }
    cout<<endl;
   }
}



void StarPattern(){
    for(int x = 1; x<=4; x++){
        for(int y=1; y<=4; y++){
            cout<<" * "<<" ";
        }
        cout<<endl;
    }
}

void Alphabets_pattern(){
    for(int i = 1; i<=4; i++){
        for(char ch = 'A'; ch <= 'E'; ch ++ ){
            cout<< ch <<" ";
        }
        cout<<endl;
    }
}


int main() {
    square_pattern();
    cout<< "------------------------------------ "<<endl;
    StarPattern();
    cout<< "------------------------------------ "<<endl;
    Alphabets_pattern();

    return 0;
}