#include<iostream>
#include<vector>
using namespace std;

int RotateArray(vector<int> array){
    int last = array[array.size()-1];
     for(int i= array.size()-1; i>=1; i--){
        array[i] = array[i-1];
    }
    array[0] = last;

    for(int el : array){
        cout<<el<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> array = {1,2,3,4,5};

    RotateArray(array);
    
return 0;
}