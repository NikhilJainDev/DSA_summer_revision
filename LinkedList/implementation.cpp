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
    }
};

int main(){
List ll;

    return 0;
}
