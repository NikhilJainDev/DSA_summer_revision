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
        int largest_elemnt = largestElement(vec);
        int soln = INT32_MIN;
        for(int i=0; i<vec.size(); i++){
            if(vec[i] != largest_elemnt){
                if(vec[i] > soln){
                    soln = vec[i];
                }
            }
        }
        return soln;
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
        int soln = INT32_MAX;
        int smallest_elemnt = SmallestElement(vec);
        for(int i=0; i<vec.size(); i++){
            if(vec[i] != smallest_elemnt){
                if(vec[i] < soln){
                    soln = vec[i];
                }
            }
        }
        return soln;
    }


int main(){

    vector<int> vec = {42, 17, 89, 3, 100, 73, 28, 64, 91, 101, 7, 38, 67, 25, 99};
    cout<<" Larget Element is -> "<<largestElement(vec)<<endl;
    cout<<" Second Larget element is : -> "<<secondLargestElement(vec)<<endl;
    cout<<" Smallest Element is -> "<<SmallestElement(vec)<<endl;
    cout<<" Second Smallest Element is -> "<<SecondSmallestElement(vec)<<endl;
    
return 0;
}