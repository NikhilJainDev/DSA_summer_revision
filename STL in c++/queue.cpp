#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> qe;

    qe.push(10);
    qe.push(15);
    qe.push(20);
    qe.push(25);

     cout<<" Size of qe queue is : "<<qe.size()<<endl;
    queue<int> qs;
      swap(qe, qs);

      cout<<" Size of qe queue is : "<<qe.size()<<endl;

    while(qe.size() != 0){
        cout<<qe.front()<<" ";
        qe.pop();
        }
        cout<<endl;

        cout<<" Size of qs queue is : "<<qs.size()<<endl;

        // Create a new queue 
        




    return 0;
}