
// Leetcode Solution of Problem 238 - Optimal Approach 

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        vector<int> pref(n,1);
        vector<int> suff(n,1);

        // calculation of prefix 
        pref[0] = 1;
        for(int i=1; i<n; i++){
            pref[i] = pref[i-1] * nums[i-1];
        }
        // calculation of suffix 
        suff[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            suff[i] = suff[i+1] * nums[i+1];
        }

        // calculation of answer 
        for(int i=0; i<n; i++){
            ans[i] = pref[i] * suff[i];
        }
        return ans;

    }
};

return 0;
}