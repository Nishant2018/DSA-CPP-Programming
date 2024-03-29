#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Declare the size of row for an array...";
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
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp=array[j][i];
            array[j][i]=array[i][j];
            array[i][j]=temp;
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
    return 0;
    
}
