#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {2, 0, 1, 2, 1, 0, 1, 2, 0, 0, 1, 2, 1, 1, 0};
    vector<int> ans;
    vector<int> non_zeros;
    vector<int> zeros;

    for(int i=0; i<vec.size(); i++){
        if(vec[i] != 0){
            non_zeros.push_back(vec[i]);
        }
        else{
            zeros.push_back(vec[i]);
        }
    }

    for(int i=0; i<non_zeros.size(); i++){
        ans.push_back(non_zeros[i]);
    }

    for(int i=0; i<zeros.size(); i++){
        ans.push_back(zeros[i]);
    }



    for(int el : ans){
        cout<<el<<" ";
    }

  
   
  
    return 0;
}