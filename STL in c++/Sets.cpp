#include<iostream>
#include<set>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   vector<int> arr  = {2,4,5,1,3,2,5,8,3,11,7,6};

   cout<<" Size of arr is : "<<arr.size()<<endl;
   set<int> st;
   for(int i=0; i<arr.size(); i++){
    st.insert(arr[i]);
   }
   arr.clear();
   cout<<" After insertion arr in set size of arr is : "<<arr.size()<<endl;
   cout<<" Now size of set is : "<<st.size()<<endl;

   for(int el : st){
    cout<<el<<" ";
   }
   cout<<endl;

   // Unordered Set in STL 

   unordered_set<int> s;
   vector<int> vc = {1,5,9,8,4,2,3,4,1,11,28,96,74};
   for(int i=0; i<vc.size(); i++){
    s.insert(vc[i]);
   }
   cout<<" Elements of unordered set are -> "<<" ";
   for(int el : s){
    cout<<el<<" ";
   }

   cout<<endl;



   




return 0;
}