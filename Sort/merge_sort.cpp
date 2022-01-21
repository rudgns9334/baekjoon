#include <iostream>
#include <algorithm>

using namespace std;


void Merge(int arr[], int start, int mid, int end){
    int a = start;
    int b = mid+1;
    int c = 0;
    int d = end-start+1;
    int tmp[d];

    while(a <= mid && b <= end){
        if(arr[a] <= arr[b]){
            tmp[c] = arr[a];
            a++;
        }
        else{
            tmp[c] = arr[b];
            b++;
        }
        c++;
    }
    if(a > mid){
        for(int i=b;i<=end;i++){
            tmp[c] = arr[i];
            c++;
        }
    }
    else{
        for(int i=a;i<=mid;i++){
            tmp[c] = arr[i];
            c++;
        }
    }
    c=0;
    for(int i=start;i<=end;i++){
        arr[i]=tmp[c];
        c++;
    }
}

void Merge_sort(int arr[], int start, int end){
    if(start < end){
        int mid = (start+end)/2;
        Merge_sort(arr, start, mid);
        Merge_sort(arr, mid+1, end);
        Merge(arr, start, mid, end);
    }
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    Merge_sort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << '\n';
    }
}
