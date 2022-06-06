#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>v;
    v.push_back(intervals[0]);
    for(int i=1;i<intervals.size();i++)
    {
        if(v[v.size()-1][1]>=intervals[i][0])
        {
            v[v.size()-1][1] = max(intervals[i][1],v[v.size()-1][1]);
        }
        else
        {
            v.push_back(intervals[i]);
        }
    }
    return v;
}

