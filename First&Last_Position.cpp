#include<iostream>
using namespace std;

int rightPosition(int arr[], int n,int target){
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            e = mid-1;
        }

        else if(arr[mid] < target){
            s = mid + 1;
        }
        else if(arr[mid] > target){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int leftPosition(int arr[], int n,int target){
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            s = mid + 1;
        }

        else if(arr[mid] < target){
            s = mid + 1;
        }
        else if(arr[mid] > target){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int arr[6] = {5,7,7,8,8,10};
    //int n = 6;
    cout<<"First index where 8 is present : "<<rightPosition(arr,6,11);
    cout<<endl;
    cout<<"Last index where 8 is present : "<<leftPosition(arr,6, 11);

}