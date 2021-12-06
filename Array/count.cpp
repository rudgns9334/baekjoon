#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,index;
    int Mul=1;
    int arr[10]={0,};

    for(int i=0;i<3;i++){
        cin >> n;
        Mul = Mul * n;
    }

    while(Mul!=0){
        index = Mul%10;
        arr[index]=arr[index]+1;
        Mul = Mul/10;
    }

    for(int i=0;i<10;i++){
        cout << arr[i] << "\n";
    }
}
