#include <iostream>
using namespace std;

bool isHansu(int n){
    int d,a,b,c;
    bool result;
    if(n/100 == 0){
        result = true;
    }
    else{
        a=n/100;
        b=(n/10)%10;
        c=n%10;
        if(a>=b){
            d = a-b;
            if(b-c == d){
                result = true;
            }
            else{
                result = false;
            }
        }
        else{
            d = b-a;
            if(c-b == d){
                result = true;
            }
            else{
                result = false;
            }
        }
    }
    return result;
}

int hansu(int n){
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(isHansu(i)){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n, cnt;
    cin >> n;
    cnt = hansu(n);
    cout << cnt << endl;
}
