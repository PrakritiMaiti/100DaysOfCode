/*
Given a grid of size n*m (n is number of rows and m is number of columns grid has) consisting of '0's(Water) and '1's(Land). Find the number of islands.
Note: An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int dis[9]={-1,-1,0,-1,1,0,1,1,-1};
    void dfs(vector<vector<char>>& g,int x,int y,int r,int c){
        if(x>=r||y>=c||x<0||y<0)return;
        if(g[x][y]=='0')return;
        g[x][y]='0';
        for(int i=0;i<8;i++)
        dfs(g,x+dis[i],y+dis[i+1],r,c);
    }
    int numIslands(vector<vector<char>>& g) {
       
        int res=0,r=g.size(),c=g[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(g[i][j]-'0'){
                    res++;
                    dfs(g,i,j,r,c);
                }
            }
        }
        return res;
    }
};

int main() {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    
    return 0;
} 