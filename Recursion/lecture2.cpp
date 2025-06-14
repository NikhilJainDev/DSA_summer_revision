#include<iostream>
#include<math.h>
using namespace std;

int sumofDigit(int n){
    // Base Case 
    if(n >=0 && n<=9){
        return n;
    }
    else{
    return  sumofDigit(n / 10) + n % 10;
    }
    
}

int Powerof_P(int p, int q){
    if(q == 0){
        return 1;
    }
    if(q == 1){
        return p;
    }
    else{
        return p * Powerof_P(p, q-1);
    }
}

int main()
{

//    cout<< sumofDigit(8);
//    cout<<endl;
//   cout<<  sumofDigit(12345);

cout<<Powerof_P(2, 4); cout<<endl;
cout<<Powerof_P(3,0); cout<<endl;
cout<<Powerof_P(4,3); cout<<endl;
cout<<Powerof_P(17,2);

return 0;
}