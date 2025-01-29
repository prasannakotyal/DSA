#include <bits/stdc++.h>
using namespace std;

int max_sum_subarray(vector<int>&v,int K){
    int n = v.size();
    int i = 0, j = 0, sum = 0, max_sum = 0;
    while(j<n){
        sum+=v[j];
        if(j-i+1<K){
            j++;
        }
        else if(j-i+1==K){
            max_sum = max(sum,max_sum);
            sum-=v[i];
            i++;
            j++;
        }
    }
    return max_sum; 
}

int main(){
    vector<int>arr = {2,5,1,8,2,9,1};
    int res = max_sum_subarray(arr,3);
    cout<<res<<"\n";

    return 0;
}