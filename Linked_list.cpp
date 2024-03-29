#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this ->data=data;
        this ->next=NULL;
    }
};
int main()
{
    Node* node1= new Node(15);
    cout<<node1 ->data<<endl;
    cout<<node1 ->next<<endl;
    
    Node* node2= new Node(19);
    cout<<node2 ->data<<endl;
    cout<<node2 ->next<<endl;
    return 0;
}