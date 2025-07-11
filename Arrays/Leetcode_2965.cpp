#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){

    // Solution on Leetcode 2965 

    class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int n = grid.size();
        int a, b;  // a - to store the repeting values & b to store the missing value
        int expSum = 0, ActualSum = 0; 
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                ActualSum = ActualSum + grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    a = grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]); // else case 
            }
        }
        expSum = (n*n) * (n*n + 1) / 2;
        b = expSum + a - ActualSum;
        ans.push_back(b);
        return ans; 
    }
};



    return 0;
}