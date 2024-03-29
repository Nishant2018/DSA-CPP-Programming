#include<iostream>
#include<stack>
using namespace std;

class Stack
{
    //properties.
    public:
    int *array;
    int top;
    int size;
    //constructor...
    Stack(int size)
    {
        this->size=size;
        array= new int[size];
        top=-1;
        
    }
    void push(int element)
    {
        if(size-top>1){ 
            top++;
            array[top]=element;

        }
        else{
            cout<<"stack overflow...";
            
        }

    }
    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack underflow...."<<endl;
        }

    }
    int peek()
    {
        if(top>=0)
        {
            return array[top];
        }
        else{
            cout<<"stack is empty.."<<endl;
            return -1;
        }

    }
    
};
int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    
}