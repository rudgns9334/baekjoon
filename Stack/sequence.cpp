#include <iostream>
#include <vector>

using namespace std;
int n;
int cnt=0;
int arr[1000001];
int ans[1000001];
vector<int> v;

int main(){

    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=n-1;i>=0;i--){
        while(!v.empty() && v.back() <= arr[i]) v.pop_back();
        if(v.empty()) ans[i]=-1;
        else ans[i] = v.back();

        v.push_back(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }

}
