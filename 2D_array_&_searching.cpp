#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Declare the size of row for an array....";
    cin>>n;
    int m;
    cout<<"Declare the size of column for an array...";
    cin>>m;
    int array[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    int key;
    bool flag=false;
    cout<<"Enter the vlaue for search...";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(array[i][j]==key)
            {
                cout<<i<<" "<<j;
                flag=true;
            }
        }

    }
    cout<<endl;
    if(flag)
    {
        cout<<"Element is found...";
    }
    else{
        cout<<"Element is not found...";
    }
    return 0;
    
}