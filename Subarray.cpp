#include<iostream>
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
    
    int counter = 0;
    for(int i=0;i<n;i++)
    {
        counter =0;
        for(int j=i;j<n;j++)
        {
          counter +=array[j];
          cout<<counter<<" ";
        }
        
    }

    return 0;
}