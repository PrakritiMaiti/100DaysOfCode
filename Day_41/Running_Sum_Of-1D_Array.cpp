#include<iostream>
#include<vector>
using namespace std;
void sum_Array(vector<int> n,vector<int>& a){
    int sum=0;
    for(int i=0;i<n.size();i++){
        sum+=n[i];
        a.push_back(sum);
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> num;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        num.push_back(k);
    }
    vector<int> ans;
    sum_Array(num,ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}