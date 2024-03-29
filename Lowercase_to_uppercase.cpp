#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout<<"Write a string for lower to upper...";
    cin>>s;

    //lower to upper convert....
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
           s[i]=s[i]-32;   //Difference between upper case and lower case is 32......
        }
        
    }
    cout<<s<<endl;
    cout<<"Write a string for upper to lower...";
    cin>>s;

    //upper to lower convert...
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;  ////Difference between upper case and lower case is 32......
        }
    }
    cout<<s<<endl;
    return 0;
}