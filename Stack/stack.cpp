#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    string str;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str;
        if(str.compare("push")==0){
            cin >> t;
            v.push_back(t);
        }
        else if(str.compare("pop")==0){
            if(v.size()==0){
                cout << -1 << endl;
            }
            else{
                cout << v.back() << endl;
                v.pop_back();
            }
        }
        else if(str.compare("size")==0){
            cout << v.size() << endl;
        }
        else if(str.compare("empty")==0){
            if(v.size()==0) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(str.compare("top")==0){
            if(v.size()==0) cout << -1 << endl;
            else cout << v.back() << endl;
        }

    }
}