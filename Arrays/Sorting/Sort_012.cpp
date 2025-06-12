#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> arr = {1,0,2,0,1,1,2,0,1,2,1,1,0};

    cout<<" Size of Vector is : "<<arr.size()<<endl;

    int count_0 = 0, count_1 = 0, count_2 = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == 0){
            count_0++;
        }
        else if(arr[i] == 1){
            count_1++;
        }
        else{
            count_2++;
        }
    }

    arr.clear();  // Here we are not taking any extra space 

    cout<<" Now size of array vector is : "<<arr.size()<<endl;

    for(int i=0; i<count_0; i++){
        arr.push_back(0);
    }

    for(int i= 0; i<count_1; i++){
        arr.push_back(1);
    }

    for(int i=0; i<count_2; i++){
        arr.push_back(2);
    }


    cout<<" After Sorting in 0 , 1, 2 is : "<<" ";
    for(int el : arr){
        cout<<el<<" ";
    }


    return 0;
}