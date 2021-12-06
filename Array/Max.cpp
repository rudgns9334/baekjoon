#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,Max,maxIndex;
    int arr[9];
    
    for(int i=0;i<9;i++){
        cin >> n;
        arr[i] = n;
    }
    Max = arr[0];
    maxIndex = 1;
    
    for(int i=0;i<9;i++){
        if(arr[i]>Max){
            Max = arr[i];
            maxIndex = i+1;
        }
    }
    cout << Max << "\n" << maxIndex << "\n";
}