#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int previous=sum(n-1);
    return n*previous;
}
int main()
{
    int n;
    cout<<"Write a number for adding...";
    cin>>n;

    cout<<sum(n)<<endl;


    return 0;
}
