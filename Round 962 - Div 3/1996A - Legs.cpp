// https://codeforces.com/problemset/problem/1996/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n;
    
    cin >> t;
    
    while(t--){
        cin >> n;
        if (n < 4) cout << 1 << endl;
        else cout << n / 4 + (n % 4 > 0 ? 1 : 0) << endl;
    }
 
    return 0;
}
