#include<iostream>
using namespace std;

void merge(int array[],int l,int mid,int r)
{
    int n1;
    int n2;
    n1=mid-l+1;
    n2=r-mid;
    int array_a[n1];
    int array_b[n2];   //temp array......

    for(int i=0;i<n1;i++)
    {
        array_a[i]=array[l+i];
    }

    for(int i=0;i<n2;i++)
    {
        array_b[i]=array[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2)
    {
        if(array_a[i]<array_b[j])
        {
            array[k]=array_a[i];
            k++;
            i++;
        }
        else
        {
            array[k]=array_b[j];
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        array[k]=array_a[i];
        k++;
        i++; 
    }
    while(j<n2)
    {
        array[k]=array_b[j];
        k++;
        j++;
    }
    
}
void mergeSort(int array[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(array,l,mid);
        mergeSort(array,mid+1,r);

        merge(array,l,mid,r);
    }
}

int main()
{
    int array[]={5,4,3,2,1};
    mergeSort(array,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<" ";

    }
    cout<<endl;
    return 0;
}