#include<bits/stdc++.h>
struct Job
{
    int deadline;
    int profit;
};
bool comp(Job j1,Job j2)
{
    return (j1.profit>j2.profit);
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n = jobs.size();
    struct Job job[n];
    int maxDeadline = 0;
    for(int i=0;i<n;i++)
    {
        job[i].deadline = jobs[i][0];
        job[i].profit = jobs[i][1];
        maxDeadline = max(maxDeadline,jobs[i][0]);
    }
    
    sort(job,job+n,comp);
    
  
    bool schedule[maxDeadline+1];
    memset(schedule,false,sizeof(schedule));
    int totalProfit = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=job[i].deadline;j>0;j--)
        {
            if(!schedule[j])
            {
                schedule[j] = true;
                totalProfit+=job[i].profit;
                break;
            }
        }
    }
    
    return totalProfit;
}




