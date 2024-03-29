#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = NULL;
        }
};

class Stack{
    private:
        Node* top;
    public:
        Stack(){
            top = NULL;
        }
        void push(int value){
            Node* newNode  = new Node(value);
            newNode ->next = top;
            top = newNode;
            cout<<value <<"pushed to the stack"<<endl;
        }
        void pop(){
            if(isEmpty()){
                cout<<"Stack underflow: Cannot pushed"<<endl;
                return;
            }
            Node* temp = top;
            top = top->next;
            cout<<temp->data<<" popped from the stack"<<endl;
            delete temp;
        }
        int peek(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            return top->data;
        }
        bool isEmpty(){
            return (top == NULL);
        }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.peek() << endl;

    myStack.pop();
    myStack.pop();

    cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}