#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main() {

    stack<int> st;
    int el = 10;
    for(int i=1; i<=5; i++){
        st.push(el);
        el =  el + 10;
    }


    // Print all the elements of stack 
    cout<<" Check stack is empty or not "<<st.empty()<<endl;
    // cout<<" Printing ....... Stack elements : "<<endl;
    // while(! st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
   

    cout<<" Top of the Stack is :  "<<st.top()<<endl;
    st.pop();
    cout<<" After popping the top top is : "<<st.top()<<endl;
     st.pop();
    cout<<" After popping the top top is : "<<st.top()<<endl;

    // swapping one stack elements to another 
    stack<int> s1 , s2;
    s1.push(56);
    s1.push(25);
    s1.push(99);

    s2.swap(s1); // also be written as : swap(s1, s2);

    cout<<" Size of s1 is : "<<s1.size()<<endl;
    cout<<" Size of s2 is : "<<s2.size()<<endl;


    // Queue in STL 

    queue<int> qe;
    priority_queue<int> pq; // special data structure 
    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }


return 0;

}