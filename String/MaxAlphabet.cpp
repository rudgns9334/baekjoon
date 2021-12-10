#include <iostream>
#include <cctype>

using namespace std;

int main(){
    int arr[26]={0,};
    int Max=0;
    int Maxindex;
    bool Equal = false;
    string str;
    cin >> str;
    for(int i=0;i<str.size();i++){
        if(isupper(str[i])){
            arr[str[i]-65]++;
        }
        else{
            arr[str[i]-97]++;
        }
    }
    for(int i=0;i<26;i++){
        if(arr[i]>Max){
            Max = arr[i];
            Maxindex = i;
            Equal = false;
        }
        else if(arr[i]==Max){
            Equal = true;
        }
    }
    if(Equal){
        cout << "?" << endl;
    }
    else{
        cout << (char)(Maxindex+65) << endl;
    }
}
