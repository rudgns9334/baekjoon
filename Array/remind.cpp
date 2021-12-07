#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[10];
    int remind[42]={0,};
    int count=0;
    for(int i=0;i<10;i++){
        cin >> arr[i];
        remind[arr[i]%42]++;
    }
    for(int i=0;i<42;i++){
        if(remind[i]!=0){
            count++;
        }
    }
    cout << count << "\n";
    
}