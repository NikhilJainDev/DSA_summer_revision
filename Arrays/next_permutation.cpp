#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> next_perm(vector<int> arr){
    int pivot = -1;
    // Step - 1 Calculation for the Pivot Element 
    for(int i = arr.size()-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1) { // Is no pivot is found in the array then return the array in increasing order 
        reverse(arr.begin(), arr.end());
    } 

    // Step - 2 Next Larger Element 
    for(int i = arr.size()-1; i>pivot; i--){
        if(arr[i] > arr[pivot]){
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    // Step 3 - Reverse the arr from (pivot + 1) to the (length - 1)

    int st = pivot + 1, end = arr.size()-1;
    while (st <= end)
    {
        swap(arr[st], arr[end]);
        st = st + 1;
        end = end - 1;
    }

    for(int el : arr){
        cout<<el<<" ";
    }

}

int main(){

    vector<int> arr = {1,2,3,6,5,4};
    vector<int> arr1 = {1,2,5,4,3};
    next_perm(arr);
    cout<<endl;
    next_perm(arr1);
    return 0;
}