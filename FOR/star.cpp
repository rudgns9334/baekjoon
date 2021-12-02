#include <iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,i,j;
    cin >> n;
    for(i=1;i<n+1;i++){
        for(j=0;j<i;j++){
            cout << "*";
        }
        cout << "\n";
    }
}