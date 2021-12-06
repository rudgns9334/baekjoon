#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,in,Max,Min;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> in;
        arr[i] = in;
    }
    Max = arr[0];
    Min = arr[0];
    
    for(int i=0;i<n;i++){
        Min = min(Min,arr[i]);
        Max = max(Max,arr[i]);
    }
    cout << Min << " " << Max << "\n";
}