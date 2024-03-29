#include<iostream>
using namespace std;
bool sorted(int array[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restarray=sorted(array+1,n-1);
    return (array[0]<array[1] && restarray);
}
int main()
{
  int n;
  cout<<"Decalre the size of an array...";
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++)
  {
    cin>>array[i];
  }
  cout<<sorted(array,n)<<endl;
  return 0;
}
