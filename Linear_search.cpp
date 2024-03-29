#include<iostream>
using namespace std;

int LinearSearch(int array[], int n, int key)
{
    for (int i=0;i<n;i++)
    {
        if(array[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Declare the size of the array=";
    cin>>n;

    int array[n];
    for (int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int key;
    cout<<"Enter the element to find the position of that element=";
    cin>>key;

    cout<<LinearSearch(array,n,key)<<endl;

    return 0;
}
