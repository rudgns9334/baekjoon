#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> dp(t+1, 1);
    int arr[t] = {0, };
    for(int i=0;i<t;i++){
        cin >> arr[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                dp[i] = max(dp[j]+1, dp[i]);
            }
        }
    }
    int ans = 0;
    for(int i=0;i<t;i++){
        ans = max(ans,dp[i]);
    }

    cout << ans << endl;

}
