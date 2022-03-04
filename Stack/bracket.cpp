#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    string str;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str;
        for(int j=0;j<str.size();j++){
            if(str[j]=='('){
                v.push_back(1);
            }
            else if(str[j]==')'){
                if(v.size()==0) v.push_back(-1);
                else if(v.back()==1) v.pop_back();
            }
        }
        if(v.size()==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        v.clear();
    }

}
