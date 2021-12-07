#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    double max=0;
    double sum=0;
    double avg=0;
    cin >> n;
    double arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[i]/max*100;
        sum +=arr[i];
        if(i==n-1){
            avg=sum/n;
        }
    }
    cout << avg << "\n";
}