#include<iostream>
using namespace std;

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

    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
          if(array[j]<array[i])
          {
              int temp=array[j];
              array[j]=array[i];
              array[i]=temp;
          }
        
      }
    }

    cout<<"After sorting";
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    int sum = 12;
    for(int i=1;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            int p1=j;
            int p2=n;
            if(array[i]+array[p1]+array[p2]>sum){
                p2--;
            }
            if(array[i]+array[p1]+array[p2]<sum){
                p1++;
            }
            if(array[i]+array[p1]+array[p2]==sum){
                cout<<array[i]<<array[p1]<<array[p2];
            }
        }
    }
    
}