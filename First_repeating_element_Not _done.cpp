#include<iostream>
#include<climits>
#include<maths.h>
using namespace std;
int main()
{
    int n;
    cout<<"Declare the size of an array....";
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int mn=INT_MAX;
    mn=pow(10,8);
    for(int i=0;i<n;i++)
    {
        if(array[i]==array[i+1])
        {
            //cout<<i<<endl;
            mn=min(mn,i);
        }
        
    }
    cout<<mn<<endl;

    return 0;
}