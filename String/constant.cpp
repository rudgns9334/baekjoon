#include <iostream>
#include <cstring>

using namespace std;

string strswap(string str){
    char tmp;
    string ret;
    tmp=str[0];
    str[0]=str[2];
    str[2]=tmp;
    ret = str;
    return ret;
}

int main(){
    string a,b;
    cin >> a;
    cin >> b;
    a = strswap(a);
    b = strswap(b);
    if(stoi(a)>stoi(b)){
        cout << a;
    }
    else{
        cout << b;
    }
}
