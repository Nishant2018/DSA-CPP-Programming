//Question= Given an unsorted array A of size N of non-negative integers. Find a continuous subarray which adds to a given number S.

#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cout<<"Declare the size of an array...";
    cin>>n;
    cout<<"How many sum you want to find...";
    cin>>s;

    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int i=0,j=0,st=-1,ed=-1,sum=0;

    while(j<n && sum + array[j]<=s)
    {
        sum=sum+array[j];
        j++;
    }

    if(sum==s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n)
    {
       sum=sum+array[j];
       while(sum>s)
       {
        sum=sum-array[i];
        i++;
       }
       if(sum==s)
       {
        st = i+1;
        ed = j+1;
        
        break;
       }
       j++;

    }
    cout<<st<<" "<<ed;
    return 0;
}