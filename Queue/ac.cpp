#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int t,n;
	string str;
	string arr;
	bool R;
	bool err;
	cin >> t;
	for(int i=0;i<t;i++){
        deque<int> dq;
        R=true;
        err=false;
        cin >> str;
        cin >> n;
        cin >> arr;
        int x=0;
        for(int j=0;j<arr.size();j++){
            if(arr[j]>='0' && arr[j]<='9'){
                x*=10;
                x+=int(arr[j]-'0');
            }
            else if(x!=0 && !(arr[j]>='0' && arr[j]<='9')){
                dq.push_back(x);
                x=0;
            }
        }
        for(int j=0;j<str.size();j++){
            if(str[j]=='R'){
                R=!R;
            }
            else if(str[j]=='D'){
                if(dq.empty()){
                    cout << "error" << "\n";
                    err=true;
                    break;
                }
                if(R){
                    dq.pop_front();
                }
                else{
                    dq.pop_back();
                }
            }
        }
        if(!err){
            cout << "[";
        }
        while(!dq.empty()){
            if(R){
                cout << dq.front();
                dq.pop_front();
            }
            else{
                cout << dq.back();
                dq.pop_back();
            }
            if(!dq.empty()){
                cout <<",";
            }
        }
        if(!err){
            cout << "]" << "\n";
        }
	}

}
