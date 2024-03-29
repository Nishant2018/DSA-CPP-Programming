#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int previous=factorial(n-1);
    return n*previous;
}
int main()
{
    int n;
    cout<<"Write a number to calculate the factorial....";
    cin>>n;

    cout<<factorial(n)<<endl;
    

    return 0;
}