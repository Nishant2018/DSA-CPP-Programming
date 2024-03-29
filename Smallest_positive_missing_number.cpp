//Question.....

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Declare the size of an array......";
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    const int N=1e6 + 2;
    bool check[N];
    for(int i=0;i<N;i++)
    {
        check[N]=0;
    }

    for(int i=0;i<n;i++)
    {
        if(array[i]>=0)
        {
            check[array[i]]=1;
        }
    }
    int ans =-1;
    

    for(int i=1;i<N;i++)
    {
        if(check[i]==0)
        {
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}