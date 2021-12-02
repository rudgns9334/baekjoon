#include <iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,i,a,b;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a << " + " << b << " = " << a+b <<'\n';
    }
}