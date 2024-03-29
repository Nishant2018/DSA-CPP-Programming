#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor....
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //Destructor...
    ~Node(){
        int value = this->data;

        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node* &head, int d){
    //new node creation...
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InserAttail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void InsertAtPosition(Node* &head,int position, int d){
    //inserting at starting ...
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;

    int cnt  = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    //inserting at tail..
    if(tenp->next = NULL){
        InserAttail(tail, d);
        return ;
    }


    //creating a node for d....
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;

}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteNode(int position , Node* &head){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free 
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
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main(){

    Node* node1 = new Node(10);
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtHead(head,12);
    print(head);
    InserAttail(tail, 15);
    print(head);
    InserAttail(tail, 16);
    print(head);

    InsertAtPosition(head, 1,20);
    print(head);
    return 0;
}