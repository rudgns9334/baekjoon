#include <iostream>
#define X 1000
using namespace std;


int n;
long long t;
long long a[6][6];
long long b[6][6];
long long c[6][6];

void matrix(int n, int m, int k, int k2, long long ans[6][6]){
    int rst=0;
    c[n][k] = 0;
    for(int i=1;i<=m;i++){
        rst+=a[n][i]*ans[i][k];
    }
    c[n][k] = rst%X;
    if(k!=1){
        matrix(n,m,k-1,k2,ans);
    }
    else if(n==1){
        for(int i=1;i<=k2;i++){
            for(int j=1;j<=k2;j++){
                ans[i][j] = c[i][j];
            }
        }
    }
    else{
        matrix(n-1,m,k2,k2,ans);
    }
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cin >> n >> t;
	for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
        b[i][i] = 1;
	}
	while(t>0){
        if(t%2==1){
            matrix(n,n,n,n,b);
        }
        matrix(n,n,n,n,a);
        t = t/2;
	}
	for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << b[i][j];
            if(j==n) cout << "\n";
            else cout << " ";
        }
	}
}
