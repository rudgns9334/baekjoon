#include <iostream>
#define X 1000000007

using namespace std;

int a,b;

long long pow(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==1) return pow(a,b-1)*a%X;
    else{
        long long h = pow(a,b/2);
        h=h%X;
        return (h*h)%X;
    }
}

long long factorial(int n){
    long long rst=1;
    for(int i=1;i<=n;i++){
        rst*=i;
        rst%=X;
    }
    return rst;
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cin >> a >> b;
	long long rst;
	rst = factorial(a)*pow(factorial(b)*factorial(a-b)%X,X-2)%X;
	cout << rst << "\n";
}
