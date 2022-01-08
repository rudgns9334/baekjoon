#include <iostream>

using namespace std;

int add(int k, int n){
    int sum = 0;
    if(k==0){
        return n;
    }
    for(int i=1;i<=n;i++){
        sum += add(k-1,i);
    }
    return sum;
}

int main()
{
    int t,k,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> k;
        cin >> n;
        cout << add(k,n) << endl;

    }
}
