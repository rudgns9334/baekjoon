#include <iostream>
using namespace std;

int d(int n){
    int result = n;
    while(n!=0){
        result += n%10;
        n = n/10;
    }
    return result;
}

int main(){
    bool self[10000];
    int tmp;
    for(int i=0;i<10000;i++){
        self[i]=true;
    }
    for(int i=0;i<10000;i++){
        tmp = d(i+1);
        if(tmp<=10000){
            self[tmp-1]=false;
        }
    }
    for(int i=0;i<10000;i++){
        if(self[i]){
            cout << i+1 << endl;
        }
    }
}
