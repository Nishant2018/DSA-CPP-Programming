#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }

    }
};
void InsertAtHead(Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void InsertAtPosition(Node* tail, Node* &head, int position, int d){
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < (position-1)){
        temp = temp->next;
        cnt++;
    }
    //inserting at last
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert ->next = temp -> next;
    temp->next ->prev = nodeToInsert;
    temp->next  =  nodeToInsert;
    nodeToInsert->prev = temp;
}
void Deletenode(int position, Node* &head){
    if(position == 1){

        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr -> prev = NULL;
        prev->next = curr -> next;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    InsertAtHead(head,12);
    print(head);
    InsertAtHead(head,13);
    print(head);
    InsertAtHead(head,114);
    print(head);
    InsertAtTail(tail, 25);
    print(head);
    InsertAtPosition(tail, head, 2, 100);
    print(head);
    return 0;
}