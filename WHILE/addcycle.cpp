#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,x,y;
    int cycle=0;
    cin >> a;
    b=a;
    while(true){
        x = b%10;
        y = (x+b/10)%10;
        b = 10*x + y;
        cycle++;
        if(a==b)break;
    }
    cout << cycle << "\n";
}
