#include <iostream>
#include <queue>

using namespace std;

int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int n,t;
    string str;
    queue<int> q;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str;
        if(str == "push"){
           cin >> t;
           q.push(t);
        }
        else if(str == "pop"){
            if(q.empty()) cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(str == "size"){
            cout << q.size() << "\n";
        }
        else if(str == "empty"){
            if(q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(str == "front"){
            if(q.empty()) cout << -1 << "\n";
            else cout << q.front() << "\n";
        }
        else if(str == "back"){
            if(q.empty()) cout << -1 << "\n";
            else cout << q.back() << "\n";
        }
    }
}
