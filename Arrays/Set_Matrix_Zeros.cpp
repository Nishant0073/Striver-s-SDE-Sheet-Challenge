
#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    vector<pair<int,int>>points;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==0)
               points.push_back({i,j});
        }
    }
    
    
    for(auto it:points)
    {
        for(int j=0;j<matrix.size();j++)
        {
            matrix[j][it.second] = 0;
        }
        for(int j=0;j<matrix[0].size();j++)
        {
            matrix[it.first][j] = 0;
        }
    }

}
