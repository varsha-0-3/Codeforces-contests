#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int x = 1, y = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(y == 1){
                    cout << "##";
                    y = 0;
                }
                else{
                    cout << "..";
                    y = 1;
                }
            }
            cout << endl;
            
            if(x == 1) y = 1;
            else y = 0;
            
            for(int k = 1; k <= n; k++){
                if(y == 1){
                    cout << "##";
                    y = 0;
                }
                else{
                    cout << "..";
                    y = 1;
                }
            }
            cout << endl;
            
            if(x == 1){
                x = 0; y = 0;
            }
            else{
                x = 1; y = 1;
            }
        }
    }
    
    return 0;
}
