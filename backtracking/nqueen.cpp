#include <iostream>

using namespace std;

int nqueen(int queen[], int x, int n)
{
    int cnt = 0;
    bool check = true;
    if(x==n){
        cnt = 1;
        return cnt;
    }
    for(int i=0;i<n;i++){
        queen[x]=i;
        for(int j=0;j<x;j++){
            if(queen[x]==queen[j] || abs(queen[x]-queen[j])==abs(x-j)){
                check = false;
                break;
            }
        }
        if(check){
            cnt += nqueen(queen, x+1, n);
        }
        else{
            check = true;
        }
    }
    return cnt;
}

int main() {
    int n;
    int rst;
    cin >> n;
    int queen[n]={0,};
    rst = nqueen(queen, 0, n);
    cout << rst << endl;
}
