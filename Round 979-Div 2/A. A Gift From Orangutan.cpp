//https://codeforces.com/problemset/problem/2030/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int test, n, element;
    cin >> test;
    
    while(test--){
        cin >> n;
        int max = INT_MIN, min = INT_MAX;
        
        for(int i = 0;i < n; i++){
            cin >> element;
            if(element > max) max = element;
            if(element < min) min = element;
        }
        
        int maxScore = (max - min) * (n - 1);
        cout << maxScore << endl;
    }
    
    return 0;
}
