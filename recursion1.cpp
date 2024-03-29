#include<iostream>
using namespace std;

int power(int n) {
    // Base case...
    if (n == 0) {
        return 1;
    }

    int ans = 2 * power(n - 1);
    return ans;
}

int main() {
    int n;
    
    cout << "Write the power: ";
    cin >> n;
    
    int result = power(n);
    
    cout << "Result: " << result << endl;
    
    return 0;
}
