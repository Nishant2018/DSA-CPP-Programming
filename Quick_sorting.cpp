#include<iostream>
using namespace std;

void swap(int array[],int i,int j)
{
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
}
int partition(int array[],int l,int r)
{
    int pivot=array[r];  //decide a pivote element.....
    int i=l-1;

    for(int j=l;j<r;j++)
    {
        if(array[j]<pivot) //condition for swaping......
        {
            i++;
            swap(array,i,j); //swap function calling.....
        }
    }
    swap(array,i+1,r);
    return i+1;
}
void quickSort(int array[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(array,l,r); //function call for partition.....
        quickSort(array,l,pi-1);
        quickSort(array,pi+1,r);
    }
}
int main()
{
    int array[5]={5,4,3,2,1};
    quickSort(array,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}
