// (A*B)%C = (A%C)*(B%C)%C

#include <iostream>

using namespace std;

int a,b,c;

long long pow(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==1) return pow(a,b-1)*a;
    else{
        long long h = pow(a,b/2);
        h=h%c;
        return (h*h)%c;
    }
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cin >> a >> b >> c;
	cout << pow(a,b)%c << "\n";
}
