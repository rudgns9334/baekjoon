#include <iostream>

using namespace std;

int main()
{
    int t,h,w,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> h >> w >> n;
        if(n%h==0){
            cout << h;
            if(n/h>9){
                cout << n/h << endl;
            }
            else{
                cout << 0 << n/h << endl;
            }
        }
        else{
            cout << n%h;
            if(n/h>8){
                cout << n/h+1 << endl;
            }
            else{
                cout << 0 << n/h+1 << endl;
            }
        }
    }
}
