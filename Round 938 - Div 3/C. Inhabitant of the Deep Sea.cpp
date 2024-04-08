//1955C	
//Time limit exceeded on test case 3
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n, k;
    cin >> t;
    
    while(t--){
        int count = 0;
        cin >> n >> k;
        vector<int> vec(n, 0);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }
        int start = 0, end = n - 1, index = start;
        while(k--){
            vec[index]--;
            if(index == start && vec[index] == 0){
                start += 1;
                index = end;
            }
            else if(index == end && vec[index] == 0){
                end -= 1;
                index = start;
            }
            else if(index == start){
                index = end;
            }
            else{
                index = start;
            }
            if(start > end)break;
        }
        for(int i = 0; i < n; i++){
            if (vec[i] == 0)count ++;
        }
        cout << count << endl;
    }
 
    return 0;
}
