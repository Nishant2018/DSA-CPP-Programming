#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Declare the size of row for an matrix....";
    cin>>n;
    cout<<"Declare the size of column of an matrix...";
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
        for(int j=0;j<m;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    int key;
    cout<<"Write an element for searching...";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(array[i][j]==key)
            {
                cout<<"true";
            }
            
        }
    }
    return 0;
}