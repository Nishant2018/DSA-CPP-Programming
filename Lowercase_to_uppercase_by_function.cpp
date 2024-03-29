#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Write string for convert from lower case to upper case....";
    cin>>s;
    
    //lower to upper convert...

    transform(s.begin(),s.end(),s.begin(), :: toupper);       //transform is a function ...........
    cout<<s<<endl;

    cout<<"Write string for convert from upper to lower case.....";
    cin>>s;

    //upper to lower convert...

    transform(s.begin(),s.end(),s.begin(), :: tolower);
    cout<<s<<endl;

    return 0;
    
}