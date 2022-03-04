#include <iostream>
#include <queue>

using namespace std;

int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int n;
    int cnt=0;
    queue<int> q;
    cin >> n;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(q.size()!=0){
        if(cnt%2==0){
            if(q.size()==1) cout << q.front() << "\n";
            q.pop();
        }
        else{
            q.push(q.front());
            q.pop();
        }
        cnt++;

    }
}
