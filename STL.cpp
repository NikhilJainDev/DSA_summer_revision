#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<deque>
#include<stack>
#include<queue>
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

    // List in c++ - It is represented as Doubly link list 

    list<int> li = {1,2,3};

    li.push_back(4);
    li.pop_back();
    li.push_front(11);
    li.push_front(5);
    li.pop_front();

    for(int val : li){
        cout<<val<<" ";
    }
    cout<<endl;

    // dequeue in C++  - Double ended queue 

    deque<int> d = {11,21,51};
    cout<<"Elements of deque are : "<<" ";
    for(int elm : d){
        cout<<elm<<" ";
    }

    cout<<endl;

    // Pairs in c++ 
    pair<string, int> pr = {"Nikhil", 20};
    cout<<"First Value in Pair is : "<<pr.first<<endl;
    cout<<" Second Value in Pair is : "<<pr.second<<endl;

    // we can also create the pair of pairs 
    pair<string, pair<string, int>> info = {"Janu Jain", {"Btech From Poornima College", 20}};

    cout<<" Pair of Pairs Info is Fetched as -> "<<endl;
    cout<<info.first<<endl;
    cout<<info.second.first<<endl;
    cout<<info.second.second<<endl;

    // Sorting in vector
    vector<int> vc  = {1,9,8,4,2,3,5,6};

    cout<<" Sorting in Ascending order is  : "<<" ";
    sort(vc.begin(), vc.end());
    for(int el : vc){
        cout<<el<<" ";
    }
    cout<<endl;
    cout<<" Sorting in Descending order is : "<<" ";
    sort(vc.begin(), vc.end(), greater<int>());
    for(int el : vc){
        cout<<el<<" ";
    }


    return 0;
}
