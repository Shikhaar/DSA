#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2) return 1;

    int prev2 = 1, prev1 = 1, curr = 0;

    for (int i = 3; i <= n; i++) {
        curr = prev1 + prev2; 
        prev2 = prev1;        
        prev1 = curr;
    }

    return curr;
}

int main() {
    int n;
    cin >> n;  

    cout << fibonacci(n) << endl; 
    return 0;
}