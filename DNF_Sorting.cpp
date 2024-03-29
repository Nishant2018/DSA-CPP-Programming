#include<iostream>
using namespace std;
void swap(int array[],int j,int i)
{
    int temp=array[j];
    array[j]=array[i];
    array[i]=temp;
}
void dnfSort(int array[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high)
    {
        if(array[mid]==0)
        {
            swap(array,low,mid);
            low++;
            mid++;
        }
        else if(array[mid]==1)
        {
            mid++;
        }
        else if(array[mid]==2)
        {
            swap(array,high,mid);
            high--;
        }
    }
}
int main()
{
    int array[9]={1,0,2,1,0,1,2,1,2};
    dnfSort(array,9);
    for(int i=0;i<9;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}