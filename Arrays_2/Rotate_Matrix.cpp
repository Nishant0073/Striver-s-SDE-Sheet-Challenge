#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int i=0,j=0,ci = (n/2), cj = (m/2);
    int temp;
    int cnt = 0;
    while(i<ci && j<cj)
    {
       // cout<<i<<" "<<j<<endl;
        int prev = mat[i][j];
        j++;
        while(j<m-cnt)
        {
            temp = mat[i][j];
            mat[i][j] = prev;
            prev = temp;
            j++;
        }
        j--;
        i++;
        while(i<n-cnt)
        {
            temp = mat[i][j];
            mat[i][j] = prev;
            prev = temp;
            i++;
        }
        i--;
        j--;
        while(j>=cnt)
        {
            temp = mat[i][j];
            mat[i][j] = prev;
            prev = temp;
            j--;
        }
        j++;
        i--;
        while(i>=cnt)
        {
            temp = mat[i][j];
            mat[i][j] = prev;
            prev = temp;
            i--;
        }
        i++;
        i++,j++;
        cnt++;
    }

}
