#include<iostream>
using namespace std;

int main()
{
    int n;
    n=20;
    int *a=&n;
    cout<<a<<endl;

    a++;
    cout<<a<<endl;
    return 0;
}