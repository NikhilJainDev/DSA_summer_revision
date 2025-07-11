#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    vector<int> arr = {3,1,3,4,2};
    
    class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0; i<nums.size(); i++){
            if(s.find(nums[i]) != s.end()){
                return nums[i];
            }
            else{
                s.insert(nums[i]);
            }
        } 
        return -1;
    }
};

    
    return 0;
}
