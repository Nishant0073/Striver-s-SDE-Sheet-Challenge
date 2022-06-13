#include<bits/stdc++.h>
struct activity
{
    int start;
    int end;
};

bool comp(activity a1,activity a2)
{
    return a1.end<=a2.end;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n = start.size();
    struct activity acti[n];
    for(int i=0;i<n;i++)
    {
        acti[i].start = start[i];
        acti[i].end = finish[i];
    }
    sort(acti,acti+n,comp);
    
    int limit =  acti[0].end;
    int cnt = 1;
    for(int i=1;i<n;i++)
    {
        if(acti[i].start>=limit)
        {
            cnt++;
            limit = acti[i].end;
        }
    }
    return cnt;
    
}
