#include <iostream>
using namespace std;
long long dp[301];

int Max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main() {
    int t;
    cin >> t;
    int arr[t]={0, };
    for(int i=0;i<t;i++){
        cin >> arr[i];
    }
    dp[1] = arr[0];
    dp[2] = arr[0]+arr[1];
    dp[3] = Max(arr[0]+arr[2], arr[1]+arr[2]);
    for(int i=4;i<=t;i++){
        dp[i]=Max(dp[i-2]+arr[i-1], dp[i-3]+arr[i-2]+arr[i-1]);
    }
    cout << dp[t] <<endl;
}
