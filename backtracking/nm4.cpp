#include <iostream>
#define MAX 9
using namespace std;

int n,m;
int arr[MAX] = {0,};
bool visited[MAX] = {0,};

void dfs(int num, int cnt)
{
    if(cnt == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        visited[i] = true;
        arr[cnt] = i;
        if(cnt != 0 && arr[cnt-1]>arr[cnt]){
            continue;
        }
        dfs(num+1, cnt+1);
        visited[i] = false;
    }
}

int main() {
    cin >> n >> m;
    dfs(1,0);
}
