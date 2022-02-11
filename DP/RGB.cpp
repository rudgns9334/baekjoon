#include <iostream>
using namespace std;
long long dp[1001][3]={0, };

int Min(int a, int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

int main() {
    int t;
    int arr[3]={0, };
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> arr[0] >> arr[1] >> arr[2];
        dp[i][0] = Min(dp[i-1][1],dp[i-1][2]) + arr[0];
        dp[i][1] = Min(dp[i-1][0],dp[i-1][2]) + arr[1];
        dp[i][2] = Min(dp[i-1][0],dp[i-1][1]) + arr[2];
    }
    cout << Min(dp[t][0],Min(dp[t][1],dp[t][2])) << endl;
}
