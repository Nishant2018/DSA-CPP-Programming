#include<iostream>
using namespace std;

int factorial(int n){
    // Base case...
    if(n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int result = factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}
