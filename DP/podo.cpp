#include <iostream>

using namespace std;

int a[10000];
int dp[10000];
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    dp[1] = a[1];
    dp[2] = a[1] + a[2];
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1];
        if(dp[i] < dp[i-2]+a[i]){
            dp[i] = dp[i-2]+a[i];
        }
        if(dp[i]< dp[i-3] + a[i-1] + a[i]){
            dp[i] = dp[i-3] + a[i-1] + a[i];
        }
    }
    cout << dp[n] << endl;
}