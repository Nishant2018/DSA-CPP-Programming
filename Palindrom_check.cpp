#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Declare the size of an array...";
    cin>>n;

    char array[n+1];
    cin>>array;
    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(array[i]!=array[n-1-i])
        {
            check = 0;
            break;
        }
    }
    if(check==1)
    {
       cout<<"Character is palindrom...";
    }
        
    
    else
    {
        cout<<"Character is not a palindrom...";
    }
    return 0;
}