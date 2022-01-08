#include <iostream>

using namespace std;

long long factorial(int N){
    if(N==0){
        return 1;
    }
    long long res = 1;
    res = factorial(N-1) * N;
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
