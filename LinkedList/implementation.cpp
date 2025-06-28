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
            Node * temp = head;
            head = head->next;
            temp->next = NULL; // breaking connection 
            delete temp; // delete starting node from memory 
        }
    }

    // Pop Back Function in Linked list 
    void pop_back(){
        if(head == NULL){
            cout<<" Linked List is Empty "<<endl;
        }
        else{
            Node * temp = head;
            // finding previous node 
            while(temp->next != tail){
                temp = temp->next;
            }
           temp-> next = NULL;  // break connection 
           delete tail;
           tail = temp;
        }
    }

    // Insert at any position of Linked List 
    void insert(int value, int pos){
        if(pos < 0){
            cout<<" Invalid Position "<<endl;
            return;
        }
        if(pos == 0){
            push_front(value);
            return;
        }
        Node * temp = head;
        for(int i=0; i<pos - 1; i++){
            if(temp == NULL){
                cout<<" Invalid Position "<<endl;
                return;
            }
            temp = temp->next;
        }

        Node * newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;

    }

    // Search in a Linkedlist 
    int search(int target){
        Node * temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == target){
               cout<<"Index is : "<<" "; return idx;
            }
            temp = temp->next;
            idx = idx + 1;
        }
        cout<<endl;
        return -1;
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
    ll.push_front(30);

    ll.PrintLL();

    ll.insert(51, 1);
    ll.PrintLL();
    ll.push_back(18);
    ll.push_front(22);
    ll.PrintLL();

    cout<< ll.search(20);
    cout<< ll.search(98);


}
