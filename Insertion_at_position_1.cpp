#include<iostream>
using namespace std;
class Node{
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
    //craete anew node...
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;

}
void print(Node* &head)
{
    //create a traverse node...
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_at_position(Node* &head,int position,int d)
{
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //creating a new node for d...
    Node* node_for_d=new Node(d);
    node_for_d->next=temp->next;
    temp->next=node_for_d;
}
int main()
{
    //create a new node....

    Node* node1= new Node(11);
    cout<<node1->data<<endl;
    //head pointed to node1..
    Node* head=node1;
    //tail pointed to node1...
    Node* tail=node1;

    insert_at_tail(tail,12);
    print(head);
    insert_at_tail(tail,13);
    print(head);
    insert_at_tail(tail,14);
    print(head);
    insert_at_position(head,2,66);
    print(head);
    return 0;
}