#include<iostream>
using namespace std;

void swap(int array[],int i,int j)
{
    int temp=array[j];
    array[j]=array[i];
    array[i]=temp;
}
void waveSort(int array[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(array[i]>array[i-1])
        {
            swap(array,i,i-1);
        }
        if(array[i]>array[i+1])
        {
            swap(array,i,i+1);
        }

    }
}
int main()
{
    int array[7]={1,3,4,7,5,6,2};
    waveSort(array,7);
    for(int i=0;i<7;i++)

    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}