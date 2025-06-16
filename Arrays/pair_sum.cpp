#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> temp;
    vector<int> ans;
     int target = 5;
    for(int i=0; i<arr.size()-1; i++){
        for(int j=i+1; j<arr.size(); i++){
            if(arr[i] + arr[j] == target){
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                break;
            }
        }
    }

    for(int el : temp){
        cout<<el<<" ";
    }

    return 0;
}