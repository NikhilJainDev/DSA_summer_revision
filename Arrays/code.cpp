#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5,0);
    cout<<" Size of Array is : "<<arr.size()<<endl;

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}