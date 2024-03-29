#include<iostream>
using namespace std;
int main(){
    int array[10]={-2,-4,4,9,2,3,-1,0,5,8};
    for(int i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            for(int z=j+1;z<10;z++){
                if((array[i]+array[j]+array[z])==0){
                    cout<<array[i]<<" ";
                    cout<<array[j]<<" ";
                    cout<<array[z]<<" ";
                    cout<<endl;
                    
                }
                
            }
        }
    }
}