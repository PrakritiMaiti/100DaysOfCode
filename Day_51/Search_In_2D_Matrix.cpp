/*74. Search a 2D Matrix
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.*/
#include<iostream>
#include<vector>
using namespace std;
bool search(vector<vector<int>> mat,int target){
    int i=0,j=mat[0].size()-1;
    while(i<mat.size()&&j>=0){
        if(mat[i][j]==target) return true;
        if(mat[i][j]<target) i++;
        else j--;
    }
    return false;
}
int main(){
    int n=4,m;
    // cin>>n>>m;
    vector<vector<int>> mat(n);
    mat={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         int k; cin>>k;
    //         mat[i].push_back(k);
    //     }
    // }
    int target=1;
    // cin>>target;

    cout<<search(mat,target);
    return 0;
}