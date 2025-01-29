#include <bits/stdc++.h>
using namespace std;

void insert(vector<int>&v,int temp);
void sort(vector<int>&v){
    if (v.size()==1) return;

    int temp = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,temp);
}

void insert(vector<int>&v,int temp){
    if (v.size()==0 || temp>=v[v.size()-1]){
        v.push_back(temp);
        return;
    }

    int val = v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
}
int main(){
    vector<int> arr = {3,5,1,4,8,6};
    sort(arr);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}