#include<iostream>
#include<set>
#include<vector>
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




return 0;
}