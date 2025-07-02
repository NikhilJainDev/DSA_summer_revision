#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> vc;
    cout<<" Size of vector "<<vc.size()<<endl;
    cout<<" Capacity is : "<<vc.capacity()<<endl;

    vc.push_back(11);
    vc.push_back(16);
    vc.push_back(17);

    cout<<" Now size is : "<<vc.size()<<endl; //3
    cout<<" Capacity is : "<<vc.capacity()<<endl; //4

    vector<int> arr = {45,11,25,36,98,74,12,33,54,69};
    cout<<"Size of arr : "<<arr.size()<<endl;

    cout<<" Array after sorted in ascending order is : "<<" ";
    sort(arr.begin(), arr.end());

    for(int el : arr){  // using for each loop 
        cout<<el<<" ";
    }
    cout<<endl;

    cout<<" Array after sorting in descending order is : "<<" ";
    sort(arr.begin(), arr.end(), greater<int>());

    for(int el : arr){
        cout<<el<<" ";
    }
    cout<<endl;

    cout<< "Is the vector empty ? "<<arr.empty()<<endl;

    arr.clear();
    cout<<" Now Is the vector Empty ? "<<" ";
    int ans = arr.empty();
    if(ans == 0){
        cout<<" No "<<endl;
    }
    else{
        cout<<" yes vector is empty "<<endl;
    }







    return 0;
}
