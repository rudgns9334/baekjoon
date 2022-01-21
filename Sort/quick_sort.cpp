#include <iostream>
#include <algorithm>

using namespace std;

void Swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int Partition(int arr[], int left, int right){
    int pivot, tmp, low, high;
    low = left;
    high = right+1;
    pivot = arr[left];
    while(low<high){
        low++;
        while(low <= right && arr[low]<pivot){
            low++;
        }
        high--;
        while(high>=left && arr[high]>pivot){
            high--;
        }
        if(low < high){
            Swap(&arr[low], &arr[high]);
        }
    }
    Swap(&arr[left], &arr[high]);
    return high;
}

void quick_sort(int arr[],int left,  int right){
    if(left<right){
        int q = Partition(arr, left, right);
        quick_sort(arr,left,q-1);
        quick_sort(arr,q+1,right);
    }

}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    quick_sort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] <<endl;
    }
}
