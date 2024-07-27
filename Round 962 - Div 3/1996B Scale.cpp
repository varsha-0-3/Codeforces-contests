// https://codeforces.com/problemset/problem/1996/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n, k, val;
    string row;
    
    cin >> t;
    
    while(t--){
        cin >> n >> k;
        
        for(int i = 0; i < n; i++){
            cin >> row;
            
            if(i % k == 0){
                for(int j = 0; j < n; j += k){
 
                    if(j % k == 0){
                        cout << row[j];
                    }
                }
                cout << endl;   
            }
        }
    }
}
