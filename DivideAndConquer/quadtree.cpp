#include <iostream>
#include <string>

using namespace std;

int N;
int board[65][65];
string str;

void check(int curY, int curX, int size){
    int current = board[curY][curX];
    bool same = true;
    for(int i=curY;i<curY+size;i++){
        for(int j=curX;j<curX+size;j++){
            if(board[i][j] != current){
                same = false;
                break;
            }
        }
    }

    if(!same){
        cout << "(";
        check(curY, curX, size/2);
        check(curY, curX+size/2, size/2);
        check(curY+size/2, curX, size/2);
        check(curY+size/2, curX+size/2, size/2);
        cout << ")";
    }
    else {
        if(current == 48) cout << 0;
        else if(current == 49) cout << 1;
    }
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cin >> N;
	for(int i=1;i<=N;i++){
        cin >> str;
        for(int j=1;j<=N;j++){
            board[i][j]=str[j-1];
        }
	}

	check(1, 1, N);
}
