//1955A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n, a, b, cost = 0;
    cin >> t;
    
    while(t--){
        cin >> n >> a >> b;
        int d = n / 2;
        int r = n % 2;
        if(2*a > b){
            cost = d * b + r * a;
        }
        else{
            cost = n * a;
        }
        cout << cost << endl;
    }
 
    return 0;
}
