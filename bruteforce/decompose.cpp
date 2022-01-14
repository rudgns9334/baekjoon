#include <iostream>

using namespace std;

int main()
{
    int n,tmp;
    int res = 0;
    cin >> n;
    for(int i=1;i<=1000000;i++){
        res = i;
        tmp = i;
        while(tmp!=0){
            res += tmp%10;
            tmp = tmp/10;
        }
        if(res == n){
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
