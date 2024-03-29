#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    //constructor..
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
int main()
{
    //created a new node...
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
    //head pointed to node1...
    Node* head=node1;
    //tail pointed to node1...
    Node* tail=node1;
    return 0;

}