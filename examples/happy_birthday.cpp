#include<vector>
using namespace std;
void dfs(int i, int j, vector<vector<char>>& hbd, vector<vector<int>>& visited) {
    
    if(i<0 || j<0 || i>=hbd.size() || j>=hbd[0].size() || visited[i][j])
        return;
    
    visited[i][j] = 1;
    
    cout<<hbd[i][j]<<" ";
    
    dfs(i+1, j, hbd, visited);
    dfs(i, j+1, hbd, visited);
    dfs(i, j-1, hbd, visited);
    dfs(i-1, j, hbd, visited);
    
}


int main() { 
    
    vector<vector<char>> hbd{
        {'H','!','!','!'},
        {'A','D','A','Y'},
        {'P','H','T','R'},
        {'P','Y','B','I'}
    };
    
    vector<vector<int>> visited(hbd.size(), vector<int>(hbd[0].size(), 0));
    
    dfs(0, 0, hbd, visited);
    
    return 0;
}