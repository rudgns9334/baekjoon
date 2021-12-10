#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = n;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        int arr[26]={0,};
        for(int j=0;j<str.size();j++){
            if(arr[str[j]-97]==0){
                arr[str[j]-97]=1;
            }
            else if(arr[str[j]-97]==1){
                if(str[j]!=str[j-1]){
                    cnt--;
                    break;
                }
            }
        }
    }
    cout << cnt << endl;
}
