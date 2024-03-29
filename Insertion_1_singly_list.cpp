#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    //constructor...
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insert_at_head(Node* &head,int d)
{
    //create a new node...
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insert_at_tail(Node* &tail,int d)
{
    //create a new node...
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{

    Node* node1= new Node(20);
    cout<<node1->data<<endl;
    //head pointed to node1
    Node* head=node1;
    //tail pointed to node1
    Node* tail=node1;
    insert_at_tail(tail,21);
    print(head);
    insert_at_tail(tail,22);
    print(head);
    insert_at_tail(tail,23);
    print(head);
    return 0;

}