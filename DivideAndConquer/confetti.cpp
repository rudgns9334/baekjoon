#include <iostream>

using namespace std;

int N;
int board[129][129];
int whiteCnt, blueCnt;

void check(int curY, int curX, int size){
    int currentColor = board[curY][curX];
    bool same = true;
    for(int i=curY;i<curY+size;i++){
        for(int j=curX;j<curX+size;j++){
            if(board[i][j] != currentColor){
                same = false;
                break;
            }
        }
    }

    if(!same){
        check(curY, curX, size/2);
        check(curY, curX+size/2, size/2);
        check(curY+size/2, curX, size/2);
        check(curY+size/2, curX+size/2, size/2);
    }
    else {
        if(currentColor == 0) whiteCnt++;
        else blueCnt++;
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
	cout << whiteCnt << "\n";
	cout << blueCnt;

}
