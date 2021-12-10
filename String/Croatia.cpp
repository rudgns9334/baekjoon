#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string str;
    int cnt = 0;
    cin >> str;
    for(int i=0;i<str.size();i++){
        cnt++;
        if(str[i]=='-'||str[i]=='='){
            cnt--;
            if(str[i]=='=' && str[i-1]=='z' && str[i-2]=='d'){
                cnt--;
            }
        }
        else if(str[i]=='j'){
            if(str[i-1]=='l' || str[i-1]=='n'){
                cnt--;
            }
        }

    }
    cout << cnt;
}
