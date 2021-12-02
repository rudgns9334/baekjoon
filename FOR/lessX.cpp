#include <iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x,i,a;
    cin >> n >> x;
    for(i=0;i<n;i++){
        cin >> a;
        if(a<x){
            cout << a << " ";
        }
    }
}