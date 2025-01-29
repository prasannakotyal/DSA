#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high);

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int pivot_idx = partition(arr,low,high);
        quicksort(arr,low,pivot_idx-1);
        quicksort(arr,pivot_idx+1,high);
    }
}

int partition(int arr[],int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<=high) i++;
        while(arr[j]>pivot && j>=low) j--;

        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[low],arr[j]);
    return j;
}


int main(){
    int a[] = {3,5,1,4,8,6};
    int n = sizeof(a)/sizeof(a[0]);
    for(int x:a){
        cout<<x<<" ";
    }
    quicksort(a,0,n-1);
    cout<<"\n";
    for(int x:a){
        cout<<x<<" ";
    }
    return 0;
}