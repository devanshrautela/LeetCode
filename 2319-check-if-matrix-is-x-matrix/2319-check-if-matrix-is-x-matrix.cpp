class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        // int n = grid.size();
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(i==j && grid[i][j]==0) return false;
                else if(grid.size()-j-1==i && grid[i][j]==0) return false;
                else if((i!=j && grid[i][j]!=0)&&(grid.size()-j-1!=i && grid[i][j]!=0)) return false;
                // if(i==j){
                //     if(grid[i][j]==0) return false;
                // }
                // if(grid.size()-j-1==i){
                //     if(grid[i][j]==0) return false;
                // }
                // if(i!=j && grid.size()-j-1!=i){
                //     if(grid[i][j]!=0) return false;
                // }
            }
        }
        return true;
    }
};