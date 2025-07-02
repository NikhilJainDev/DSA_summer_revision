#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(16);
    st.push(89);
    st.push(74);

    cout<<" Top of the Stack is : "<<st.top()<<endl;
    st.pop();
    cout<<" Top of the Stack is : "<<st.top()<<endl;
    cout<<" Is the Stack empty : "<<st.empty()<<endl;
    st.push(45);

    cout<<" Print the Elements of the Stack "<<" ";
    while(st.size() != 0){
        cout<<st.top();
        st.pop();
        cout<<" ";
    }

    

    return 0;
}