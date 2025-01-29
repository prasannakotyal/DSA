#include <bits/stdc++.h>
using namespace std;

vector<int> first_neg_num(vector<int>&v,int k){
    int n = v.size();
    int i=0,j=0;
    deque<int> ans;
    vector<int> res;

    while(j<n){
        if(v[j]<0){
            ans.push_back(v[j]);
        }

        if(j-i+1<k){
            j++;
        }

        else if(j-i+1==k){
            if(ans.size()==0){
                res.push_back(0);
            }
            else{
                res.push_back(ans.front());
                if (v[i] == ans.front()) {
                    ans.pop_front();
                }
            }
            i++;
            j++;
        }
    }

    return res;
}

int main(){
    vector<int> arr = {12,-1,-7,8,-18,30,16,28};    
    vector<int> res = first_neg_num(arr,3);
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}