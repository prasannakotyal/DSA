#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int low,int mid,int high);
void merge_sort(vector<int> &arr,int low,int high){
    if(low<high){
    int mid = low + (high-low)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
    }

}

void merge(vector<int>&arr,int low,int mid,int high){
   vector<int> temp;
   int left = low;
   int right = mid+1;

   while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
    }
    else {
        temp.push_back(arr[right]);
        right++;
    }
   }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;        
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;        
    }

    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
   
}

int main(){
    vector<int> arr = {3,5,1,4,8,6};
    int n = arr.size();
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<"\n";
    merge_sort(arr,0,n-1);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}