#include <iostream>
#include <cstring>

using namespace std;

int dial(char c){
    int rlt;
    if(c>=65 && c<=67){
        rlt = 3;
    }
    else if(c>=68 && c<=70){
        rlt = 4;
    }
    else if(c>=71 && c<=73){
        rlt = 5;
    }
    else if(c>=74 && c<=76){
        rlt = 6;
    }
    else if(c>=77 && c<=79){
        rlt = 7;
    }
    else if(c>=80 && c<=83){
        rlt = 8;
    }
    else if(c>=84 && c<=86){
        rlt = 9;
    }
    else if(c>=87 && c<=90){
        rlt = 10;
    }
    return rlt;
}

int main(){
    string str;
    int time=0;
    cin >> str;
    for(int i=0;i<str.size();i++){
        time = time + dial(str[i]);
    }
    cout << time;
}
