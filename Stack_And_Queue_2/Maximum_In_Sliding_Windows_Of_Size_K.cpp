#include<bits/stdc++.h>
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.
    vector<int>ans;
    deque<int>dq;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        if(dq.size()!=0)
        {
            while(!dq.empty() && dq.front()==(i-k))
                dq.pop_front();
            while(!dq.empty() && nums[dq.back()]<nums[i])
                dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1)
            ans.push_back(nums[dq.front()]);
    }
    return ans;
}
