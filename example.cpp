#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
  
    int pre[5 + 1] = { 0 }; 
    // 5+1 bc range can end at last index 
    int m = 3, mx = 0; 
    for (int i = 0; i < m; i++) { 
        // take input a and b 
        int a, b; // 2 4 
        cin >> a >> b; // 1 3 
        // 1 2 
        // add 100 at first index and -100 
        // at last+1 index 
        pre[a] += 100; 
        pre[b + 1] += -100; 
    } 
    for (int i = 1; i <= 5; i++) { 
        // add all values in a cumulative way 
        pre[i] += pre[i - 1]; 
  
        // keep track of max value 
        mx = max(mx, pre[i]); 
    } 
    cout << mx; 
    return 0; 
} 
// This code is contributed by Varad Thokal 
