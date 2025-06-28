#include<iostream>
using namespace std;
class Node{
    public:

    int data;
    Node * next; // current node will store the address of its previous node 

    Node(int value){
        data = value;
        next = NULL; 
    }

};

class List{
    Node * head;
    Node * tail;

    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int value){
        Node * newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void PrintLL(){
    Node * temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
}

};


int main(){
List ll;
ll.push_front(11);
ll.push_front(21);
ll.push_front(51);
ll.push_front(101);

ll.PrintLL();
cout<<endl;

ll.push_front(523);
ll.PrintLL();

    return 0;
}
