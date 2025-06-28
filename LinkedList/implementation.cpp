#include<iostream>
using namespace std;
class Node{
    public:

    int data;
    Node * next; // current node will store the address of its previous node 

    Node(int value){
        data = value;
        next = NULL;  // it stores the address 
    }

};

class List{
    Node * head;
    Node * tail;

    public:
    List(){
        head = tail = NULL;
    }

    // Push Front Function 
    void push_front(int value){
        Node * newNode = new Node(value);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    // Push Back Function 
    void push_back(int value){
        Node * newNode = new Node(value);
        if(head == NULL){
            head = tail =  newNode;
            return;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Pop Front Function in Linked List 
    void pop_front(){
        if(head == NULL){
            cout<<" Linked List is Empty "<<endl;
        }
        else{

        }
    }

    void PrintLL(){
    Node * temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

};


int main(){
    List ll;
     ll.push_front(10);
    ll.push_front(20);
    ll.push_front(25);
    ll.PrintLL();

    ll.push_back(60);
    ll.PrintLL();
   ll.pop_front();

    return 0;
}
