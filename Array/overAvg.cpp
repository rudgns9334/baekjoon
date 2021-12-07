#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c,n;
    int sum=0;
    int cnt=0;
    double avg=0;
    cin >> c;
    for(int i=0;i<c;i++){
        cin >> n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
            sum += arr[j];
        }
        avg = sum/n;
        for(int j=0;j<n;j++){
            if(arr[j]>avg){
                cnt++;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << (double)cnt/n*100 << "%" << "\n";
        sum=0;
        avg=0;
        cnt=0;
    }
}
