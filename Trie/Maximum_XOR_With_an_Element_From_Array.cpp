#include<bits/stdc++.h>
vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
	//	Write your coode here.
    sort(arr.begin(),arr.end());
    vector<int> ans;
    for(int i=0;i<queries.size();i++)
    {
        int xi = queries[i][0];
        int ai = queries[i][1];
        int qans = -1;
        for(int j=0;j<arr.size();j++)
        {
            if(arr[j]>ai)
                break;
            else
                 qans = max(qans,xi^arr[j]);
        }
        
        ans.push_back(qans);
    }
    return ans;
    
}
