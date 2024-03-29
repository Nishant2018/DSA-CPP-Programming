#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<pair<int,int>>vec={
        {2,1},{3,2},{4,3}
        };
    

    //adding a pair.....

    vec.push_back(make_pair(7,8));
    for(int i=0;i<vec.size();i++)
    {
        cout<<"("<<vec[i].first<<","<<vec[i].second<<")";
    }
    cout<<endl;

    //deleting a pair.......

    vec.erase(vec.begin()+2);

    //after deleting the pair...

    for(int i=0;i<vec.size();i++)
    {
        cout<<"("<<vec[i].first<<","<<vec[i].second<<")";
    }
    cout<<endl;

    return 0;
}