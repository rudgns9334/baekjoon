#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int res = 0;
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]<=m){
                    if(a[i]+a[j]+a[k]>res){
                        res = a[i]+a[j]+a[k];
                        if(res == m){
                            cout << res << endl;
                         return 0;
                        }
                    }
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}
