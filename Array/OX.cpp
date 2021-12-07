#include<iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int score=0;
    int stack=0;
    cin >> n;
    string ox;
    for(int i=0;i<n;i++){
        cin >> ox;
        for(int j=0;j<ox.size();j++){
            if(ox[j]=='O'){
                stack++;
                score+=stack;
            }
            else{
                stack=0;
            }
        }
        cout << score << "\n";
        score = 0;
        stack = 0;
    }
}