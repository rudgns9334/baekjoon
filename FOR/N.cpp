#include <iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,i;
    cin >> n;
    for(i=0;i<n;i++){
        cout << i+1 << '\n';
    }
}