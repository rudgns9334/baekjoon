#include <iostream>

using namespace std;

int n,m,k;
int a[101][101];
int b[101][101];
int c[101][101];

void matrix(int n, int m, int k, int k2){
    int rst=0;
    for(int i=1;i<=m;i++){
        rst+=a[n][i]*b[i][k];
    }
    c[n][k] = rst;
    if(k!=1){
        matrix(n,m,k-1,k2);
    }
    else if(n==1){}
    else{
        matrix(n-1,m,k2,k2);
    }
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
	}
	cin >> m >> k;
	for(int i=1;i<=m;i++){
        for(int j=1;j<=k;j++){
            cin >> b[i][j];
        }
	}
	matrix(n,m,k,k);
	for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            cout << c[i][j];
            if(j==k) cout << "\n";
            else cout << " ";
        }
	}
}
