#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int linearSearch(vector<int> arr, int target){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}


int BinarySearch(vector<int> array, int target_value){
    int start = 0, end = array.size()-1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(array[mid] == target_value){
            return mid;
        }
        else if(target_value > array[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1;
}


int SumofArrayElements(vector<int> arr){
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum = sum + arr[i];
    }
    return sum;
}



int main(){

    vector<int> vc = {10,20,30,40,50,60,70};

    cout<<linearSearch(vc, 40);
    cout<<endl;
    cout<<linearSearch(vc, 90);

    cout<<endl;

    vector<int> vec = {15,18,21,43,52,56,78,95};

    cout<<BinarySearch(vec, 56);

    vector<int> arr = {1,2,3,8,9};
    cout<<SumofArrayElements(arr);

    cout<<endl;

    reverse(arr.begin(), arr.end()); // reverse using stl 
    for(int el : arr){
        cout<<el<<" ";
    }
  



    return 0;
}