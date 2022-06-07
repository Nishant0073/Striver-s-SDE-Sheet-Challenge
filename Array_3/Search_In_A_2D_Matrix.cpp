#include <bits/stdc++.h> 
#include <vector>


bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    for(int i=0;i<m;i++)
    {
        if(mat[i][0]<=target && mat[i][n-1]>=target)
        {
            int left = 0,right = n-1;
            while(left<=right)
            {
                int mid = (left+right)/2;
                if(mat[i][mid]==target)
                    return true;
                if(mat[i][mid]<target)
                    left = mid+1;
                else
                    right = mid-1;
            }
            return false;
        }
    }
    return false;
}
