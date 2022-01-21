#include <iostream>
#include <string>

using namespace std;

bool is666(int num){
    string str = to_string(num);
    for(int i=0;i<str.length()-2;i++){
        if(str[i]=='6'){
            if(str[i+1]=='6'){
                if(str[i+2]=='6'){
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int start = 666;
    int cnt = 1;

    while(n!=cnt){
        start++;
        if(is666(start)){
            cnt++;
        }
    }

    cout << start << endl;
}
