#include <iostream>
using namespace std;

int main(){
    long long a;
    long long fountain = 1;
    long long cnt = 1;
    cin >> a;
    while(fountain < a){
        cnt++;
        fountain = fountain + cnt;
    }
    if(cnt%2==1){
        cout << 1+(fountain-a) << "/" << cnt-(fountain-a) << endl;
    }
    else{
        cout << cnt-(fountain-a) << "/" << 1+(fountain-a) << endl;
    }

}
