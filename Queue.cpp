#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(15);
    q.push(16);
    q.push(17);
    q.pop();
    cout<<q.front()<<endl;//use to see first element
    
    cout<<q.size()<<endl;

    if(q.empty())
    {
        cout<<"Queue is empty....";
    }
    else{
        cout<<"Queue is not empty....";
    }
    cout<<endl;
    cout<<q.back()<<endl;//use to see last element....
    return 0;
}