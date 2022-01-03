/*48. Rotate Image*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>> &num){
    //transpose
    int r=num.size();
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){
            swap(num[i][j],num[j][i]);
        }
    }
    for(int i=0;i<r;i++){
        reverse(num[i].begin(),num[i].end());
    }
}
int main(){
    int n=3;
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    rotate(arr);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}