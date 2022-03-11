#include <iostream>

using namespace std;

int N;
int board[2188][2188];
int Z, M, P;

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
        check(curY, curX, size/3);
        check(curY, curX+size/3, size/3);
        check(curY, curX+(size/3)*2, size/3);
        check(curY+size/3, curX, size/3);
        check(curY+size/3, curX+size/3, size/3);
        check(curY+size/3, curX+(size/3)*2, size/3);
        check(curY+(size/3)*2, curX, size/3);
        check(curY+(size/3)*2, curX+size/3, size/3);
        check(curY+(size/3)*2, curX+(size/3)*2, size/3);
    }
    else {
        if(current == -1) M++;
        else if(current == 0) Z++;
        else P++;
    }
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cin >> N;
	for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin >> board[i][j];
        }
	}

	check(1, 1, N);

	cout << M << "\n" << Z << "\n" << P << "\n";
}
