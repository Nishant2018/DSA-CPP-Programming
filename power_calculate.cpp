#include<iostream>
using namespace std;
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int previous=power(n,p-1);
    return n*previous;
}
int main()
{
    int n,p;
    cout<<"Write a number..";
    cin>>n;
    cout<<"Power to that number...";
    cin>>p;
    cout<<power(n,p)<<endl;


    return 0;
}