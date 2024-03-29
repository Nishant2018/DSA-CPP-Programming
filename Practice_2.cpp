#include<iostream>
using namespace std;
int  main(){
    int count0=0;
    int count1=0;
    int count2=0;
    int array[10]={2,2,1,0,2,0,1,2,0,0};
    for(int i=0;i<10;i++){
        if(array[i]==0){
            count0++;
        }
        else if(array[i]==1){
            count1++;
        }
        else if(array[i]==2){
            count2++;
        }
    }
cout<<count0;
cout<<endl;
cout<<count1;
cout<<endl;
cout<<count2;
cout<<endl;
for(int i=0;i<10;i++){
    if(i<=4){
        array[i]=0;
    }
    if(i>4 && i<7){
        array[i]=1;
    }
    if(i>7){
        array[i]=2;
    }
}
for(int i=0;i<10;i++){
    cout<<array[i]<<" ";
}
}