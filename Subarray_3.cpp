//print all subarray and sum of maximum subarray............
#include<iostream>
#include<climits>
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
  int sum=0;
  int maxNo=INT_MIN;
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      sum=0;
      int k;
      for(int k=i;k<=j;k++)
      {
        //cout<<array[k]<<" ";
        sum=sum+array[k];
        
      }
      maxNo=max(maxNo,sum);
      //cout<<endl;
    }
  }
  cout<<maxNo;
  return 0;
}