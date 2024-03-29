    #include<iostream>
    using namespace std;

    int main()
    {
        int n;
        cout<<"Declare the size of an array.....";
        cin>>n;
        int array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        //int first;
        //first=array[0];
        int ans=0;
        int mx=-1;
        if(n==1)
        {
            cout<<"1";
            return 0;
        }
        for(int i=0;i<n;i++)
        {
           if(array[i]>mx && array[i]>array[i+1])
           {
            ans++;
           } 
           mx=max(mx,array[i]);
            
        }
        cout<<ans<<endl;;
        return 0;
    }