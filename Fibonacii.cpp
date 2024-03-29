#include<iostream>
using namespace std;
int fibonacii(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibonacii(n-1) + fibonacii(n-2);
}
int main()
{
    int n;
    cout<<"Write the number....";
    cin>>n;
    cout<<"Number at "<<n<<"th term of fibonacii series is "<<fibonacii(n)<<endl;
    return 0;
}