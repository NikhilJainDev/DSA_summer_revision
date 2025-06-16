#include<iostream>
#include<vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> arr1, vector<int> arr2){
    vector<int> ans;
    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){
            if(arr1[i] == arr2[j]){
                ans.push_back(arr1[i]);
                arr2[j] = INT32_MIN;
                break;
            }
        }
    }
    for(int el : ans){
        cout<<el<<" ";
    }
}
int main(){

    vector<int> arr1 = {1,2,2,2,3,4};
    vector<int> arr2 = {2,2,3,3};
   findArrayIntersection(arr1, arr2);
    return 0;

}