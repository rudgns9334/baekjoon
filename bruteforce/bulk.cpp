#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][3];
    for(int i=0;i<n;i++){
        cin >> a[i][0] >> a[i][1];
        a[i][2] = 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(a[i][0]<a[j][0] && a[i][1]<a[j][1]){
                a[i][2]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i][2] << " ";
    }
    cout << endl;
    return 0;
}
