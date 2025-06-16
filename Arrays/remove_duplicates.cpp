#include<iostream>
#include<vector>
using namespace std;

int removeDuplicate(vector<int> arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }

    for(int i=1; i<arr.size(); i++){
        ans = ans ^ i;
    }
    return ans;
}
int main(){
    vector<int> arr = {4,2,1,3,1};
    vector<int> array = {6,3,1,5,4,3,2};

    cout<< removeDuplicate(arr); cout<<endl;
    cout<< removeDuplicate(array);
}