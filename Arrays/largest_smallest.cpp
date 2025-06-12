#include<iostream>
#include<vector>
using namespace std;


   int largestElement(vector<int> vec){
    int ans = INT32_MIN;
    for(int i=0; i<vec.size(); i++){
        if(vec[i] > ans){
            ans = vec[i];
        }
    }
    return ans;
    }

    int secondLargestElement(vector<int> vec){

    }

    int SmallestElement(vector<int> vec){
        int ans = INT32_MAX;
        for(int i=0; i<vec.size(); i++){
            if(vec[i] < ans){
                ans = vec[i];
            }
        }
        return ans;
    }

    int SecondSmallestElement(vector<int> vec){

    }


int main(){

    vector<int> vec = {42, 17, 89, 3, 56, 73, 28, 64, 91, 101, 7, 38, 67, 25, 99};
    cout<<" Larget Element is -> "<<largestElement(vec)<<endl;
    cout<<secondLargestElement(vec)<<endl;
    cout<<" Smallest Element is -> "<<SmallestElement(vec)<<endl;
    cout<<SecondSmallestElement(vec)<<endl;
    
return 0;
}