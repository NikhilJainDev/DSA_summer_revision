#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    cout<<" Now Size of Vector is : "<<vec.size()<<endl;
    cout<<" Capacity of Vector is : "<<vec.capacity()<<endl;

    vec.pop_back();

    cout<<" After deleting the element size of vector becomes -> "<<vec.size()<<endl;

    vector<int> arr = {87,40,59,61,12,55,63};
    sort(arr.begin(), arr.end());

    for(int el : arr){
        cout<<el<<" ";
    }
    cout<<endl;

    cout<<" Fornt element on vector is : "<<arr.front();
    cout<<" Back element on vector is : "<<arr.back()<<endl;

    arr.clear(); // clear the vector All elements 

    cout<<" Check that vector is empty or not "<<arr.empty()<<endl;
    

    return 0;
}
