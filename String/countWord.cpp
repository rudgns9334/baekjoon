#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int cnt=0;
    char str[1000000];
    cin.getline(str, 1000000);
    char *ptr = strtok(str," ");
    while(ptr != NULL){
        cnt++;
        ptr = strtok(NULL," ");
    }
    cout << cnt << endl;
}
