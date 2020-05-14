class Solution {
public:
    void dfs(vector<vector<int>> & solution,vector<vector<bool>> & visited, int i,  int j, int m, int n, int prevColor, int newColor)
    {
        if(i<0 || i>=m || j<0 || j>=n)
            return;
        if(solution[i][j]!=prevColor || visited[i][j])
            return;
        solution[i][j]=newColor;
        visited[i][j]=true;
        dfs(solution,visited,i+1,j,m,n,prevColor,newColor);
        dfs(solution,visited,i-1,j,m,n,prevColor,newColor);
        dfs(solution,visited,i,j+1,m,n,prevColor,newColor);
        dfs(solution,visited,i,j-1,m,n,prevColor,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<bool>> visited;
        for(int i=0;i<m;i++)
        {
            vector<bool> temp;
            for(int j=0;j<n;j++)
            {
                temp.push_back(false);
            }
            visited.push_back(temp);
        }
        dfs(image,visited,sr,sc,m,n,image[sr][sc],newColor);
        return image;
    }
};