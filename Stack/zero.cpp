#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,t;
    int sum = 0;
    vector<int> v;
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> t;
        if(t==0){
            v.pop_back();
        } 
        else{
            v.push_back(t);
        }
    }
    for(int i=0;i<v.size();i++){
        sum += v[i];
    }
    cout << sum << endl;
}