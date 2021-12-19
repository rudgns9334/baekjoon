#include <iostream>
using namespace std;

int main(){
    int a;
    int beehive = 1;
    int cnt = 1;
    cin >> a;
    while(beehive < a){
        beehive = beehive +6*cnt;
        cnt++;
    }
    cout << cnt << endl;
}
