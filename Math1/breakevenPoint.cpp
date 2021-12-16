#include <iostream>
using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    if(b>=c){
        cout << -1 << endl;
    }
    else{
        cout << -a/(b-c)+1 << endl;
    }
}
