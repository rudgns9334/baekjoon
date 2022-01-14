#include <iostream>

using namespace std;

int B_Start(char *a, int n, int m, int x, int y){
    int cnt=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if((i+j)%2==0){
                if(*(a + (x+i)*m + y + j)=='W'){
                    cnt++;
                }
            }
            else{
                if(*(a + (x+i)*m + y + j)=='B'){
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int W_Start(char *a, int n, int m, int x, int y){
    int cnt=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if((i+j)%2==0){
                if(*(a + (x+i)*m + y + j)=='B'){
                    cnt++;
                }
            }
            else{
                if(*(a + (x+i)*m + y + j)=='W'){
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main()
{
    int n,m;
    int cntb = 0;
    int cntw = 0;
    int res = 0;
    cin >> n >> m;
    char cass[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> cass[i][j];
        }
    }

    for(int i=0;i<n-7;i++){
        for(int j=0;j<m-7;j++){
            cntb = B_Start((char*)cass,n,m,i,j);
            cntw = W_Start((char*)cass,n,m,i,j);
            if(cntb<cntw){
                if(i==0 && j==0){
                res = cntb;
                }
                else{
                    if(cntb < res){
                        res = cntb;
                    }
                }
            }
            else{
                if(i==0 && j==0){
                res = cntw;
                }
                else{
                    if(cntw < res){
                        res = cntw;
                    }
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}
