#include<bits/stdc++.h>
using namespace std;


int findNthFibonacci(int n) {
    
    if (n == 1 || n == 2) {
        return 1;
    }
    
    
    int prev1 = 1, prev2 = 1;
    int current;
    
   
    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2; 
        prev2 = current;
    }
    
   
    return current;
}

int main() {
    int n;
    cin >> n;
    cout << findNthFibonacci(n) << endl;
    return 0;
}