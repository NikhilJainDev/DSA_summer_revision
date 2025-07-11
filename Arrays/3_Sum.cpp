#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;

// Brute force Approach in 3 Sum Problem 

int main(){
    vector<int> arr = {-1,0,1,2,-1,4};
    set<vector<int>> st;

    for(int i=0; i<= arr.size()-3; i++){
        for(int j = i+1; j<=arr.size()-2; j++){
            for(int k = j+1; k<= arr.size()-1; k++){
                if(arr[i] + arr[j] + arr[k] == 0){
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    for(auto triplet : st){
        for(int el : triplet){
            cout<<el<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}
