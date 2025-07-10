// Hashuing problem in c++ 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    // Approach - 1 (Brute force Approach of Two sum Problem in O(n^2) time )
    vector<int> arr = {5,2,11,7,15};
    pair<int, int> pr;
    bool found = false;
    int target = 17;
    for(int i=0; i<arr.size()-1; i++){
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == target){
                pr = {i, j};
                found = true;
                break;
            }
        }
    }
    if(found){
        cout<<" Index of Element that Make pair is : "<<pr.first<<" "<<pr.second<<endl;
    }
    else{
        cout<<" No such pair found in array "<<endl;
    }

    // Approach - 2 (Better Approach to solve 2 Sum problem - O(n log n)) time 

    vector<int> nums = {5,2,11,7,15};
    sort(nums.begin(), nums.end());

    pair<int, int> p;
    bool getPair = false;
    int target = 9, st = 0 , end = nums.size()-1, sum;
    while(st < end){
        sum = nums[st] + nums[end];
        if(target == sum ){
            getPair = true;
            p = {st, end};
            break;
        }
        else if(sum > target){
            end = end -1;
        }
        else{
            st = st + 1;
        }
    }

    if (getPair){
        cout<<" Pair found with index : "<<p.first<<"  "<<p.second<<endl;
    }
    else{
        cout<<" Pair not Found "<<endl;
    }

    // Approach - 3 ) Most Optimal Approach using unordered map 
    // - solution on Leetcode Problem 1
    

    return 0;

}