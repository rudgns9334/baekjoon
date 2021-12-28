#include <iostream>
using namespace std;

int main(){
    long long a,b,v;
    cin >> a >> b >> v;
    if((v-b)%(a-b)==0){
        cout << (v-b)/(a-b) << endl;
    }
    else{
        cout << (v-b)/(a-b) +1 << endl;
    }

}
