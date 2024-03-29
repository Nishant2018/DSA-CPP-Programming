#include<iostream>
using namespace std;

int fibonacii(int n){
    //Base case.....
    if(n==0){ //Base case 1
        return 1;
    }
    if(n==1){ //Base case 2
        return 1;
    }
    //Recursive call.............
    return fibonacii(n-1) + fibonacii(n-2);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    //Function call.....
    int result = fibonacii(n);
    cout<<"Fobonacii of this number is : "<<result<<endl;

    return 0;
}