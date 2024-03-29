#include<iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack{
    private:
        int arr[MAX_SIZE];
        int top;
    
    public:
        Stack(){
            top = -1; //initialise top to -1 indication an empty list
        }

        void push(int value){
            if(top == MAX_SIZE - 1){
                cout<<"Stack Overflow: Can't push element"<<endl;
                return;
            }
            arr[++top] = value;
            cout<<value<<" pushed to the stack"<<endl;

        }
        void pop(){
            if(top == -1){
                cout<<"Stack underflow: Cannot pop element, Stack is empty"<<endl;
                return;
            }
            cout<<arr[top--]<<" popped from the stack"<<endl;

        }
        int peek(){
            if(top == -1){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            return arr[top];

        }
        bool isEmpty(){
            return (top == -1);
        }
};

int main(){

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