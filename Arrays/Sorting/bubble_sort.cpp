#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {8,9, 4, 3, 21, 18, 59, 96, 43};

    // Applying Bubble Sort in Array 

    for(int i=0; i<arr.size()-1; i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }

    // Finally Print the Sorted Array 

    cout<<" After Sorting Array is : "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Store the Square of Array in another array   

    vector<int> vec = {2,3,4,5,6};
    vector<int> sq_vec;

    for(int i=0; i<vec.size(); i++){
        sq_vec.push_back(vec[i] * vec[i]);
    }

    cout<<" Square Array is : "<<" ";
    for(int i=0; i<sq_vec.size(); i++){
        cout<<sq_vec[i]<<" ";
    }


    return 0;
}