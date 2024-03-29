//saying digits..............

#include<iostream>
using namespace std;

void sayfunction(int n,string arr[]){
    //base case....
    if(n==0){
        return;
    }
    int ans = n%10;
    n = n/10;
    sayfunction(n,arr);

    cout<<arr[ans]<<' ';
}
int main(){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    sayfunction(n,arr);

    return 0;
}