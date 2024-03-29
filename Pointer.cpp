#include<iostream>
using namespace std;
int main()
{
    int n=15;
    int *a=&n;
    cout<<*a<<endl;
    *a=20;
    cout<<n<<endl;
    return 0;
}