#include<iostream>
#include<vector>
using namespace std;


int findUnique(vector<int> vc){
    int ans = 0;
    for(int i=0; i<vc.size(); i++){
        ans = ans ^ vc[i];
    }
    return ans;
}


int main(){
    // Swap Alternates Values in Array 

    vector<int> arr = {1,3,2,7,11,8};
    vector<int> array = {1,2,3,4,5};
    for(int i=0; i<array.size()-1; i++){
        if(i % 2 == 0){
            swap(array[i], array[i+1]);
        }
    }

    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }

    cout<<endl;

    vector<int> vec = {2,3,1,6,3,6,2,1,18,6,3,3,5,6,5};
    cout<<" Unique Element is : "<<findUnique(vec);
    return 0;
}