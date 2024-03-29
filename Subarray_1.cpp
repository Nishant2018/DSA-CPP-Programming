#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"declare the size of an array....";
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int pd=array[1]-array[0] ;  //previous difference
    int current_length=2;
    int ans=2;
    int j=2;

    while(j<n)
    {
        if(pd==array[j]-array[j-1])
        {
          current_length++;
        }
        else if(pd!=array[i]-array[i-1])
        {
            current_length=2;
        }
        ans=max(ans,current_length);
        j++;
    }

    return 0;
}