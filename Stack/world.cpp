#include <iostream>
#include <vector>

using namespace std;

int main(){
    string str;
    vector<int> v;
    while(1){
        getline(cin, str);
        if(str[0]=='.') break;
        for(int j=0;j<str.size();j++){
            if(str[j]=='('){
                v.push_back(1);
            }
            else if(str[j]=='[') v.push_back(2);
            else if(str[j]==')'){
                if(v.size()==0 || v.back()==2) v.push_back(-1);
                else if(v.back()==1) v.pop_back();
            }
            else if(str[j]==']'){
                if(v.back()==2) v.pop_back();
                else if(v.size()==0 || v.back()==1) v.push_back(-1);
            }
        }
        if(v.size()==0){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
        v.clear();
    }

}
