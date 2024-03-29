#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Declare the size of an array...";
    cin>>n;
    cin.ignore();
    
    char array[n+1];
    cin.getline(array,n);
    cin.ignore();

    int i=0;
    int maxlen=0,currlen=0;

    while(1)
    {
        
        if(array[i]==' ' || array[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen=currlen;
            }
            currlen=0;
        }
        else
        currlen++;
        if(array[i]=='\0')
        break;
        i++;

    }
    cout<<maxlen<<endl;
    return 0;
    
}