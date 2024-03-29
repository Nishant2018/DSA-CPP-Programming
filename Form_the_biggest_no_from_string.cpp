#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout<<"Write numeric string.....";
    cin>>s;

    sort(s.begin(),s,end(),greater<int>());  //greater is used to arrange in decending order......
    cout<<s<<endl;

    return 0;
}