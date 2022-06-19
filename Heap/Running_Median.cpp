#include<bits/stdc++.h>
void findMedian(int *arr, int n)
{
    // Write your code here
    if(n==0)
        return;
    priority_queue<int>s;
    priority_queue<int,vector<int>,greater<int>>g;
    s.push(arr[0]);
    int med = arr[0];
    cout<<med<<" ";
    for(int i=1;i<n;i++)
    {
        int x = arr[i];
        if(s.size()==g.size())
        {
            if(x<med)
            {
                s.push(x);
                med = s.top();
            }
            else
            {
                g.push(x);
                med = g.top();
            }
        }
        else if(s.size()<g.size())
        {
            if(x<med)
            {
                s.push(x);
            }
            else
            {
                s.push(g.top());
                g.pop();
                g.push(x);
            }
            med = (s.top()+g.top())/2;
        }
        else
        {
            if(x>med)
            {
                g.push(x);
            }
            else
            {
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            med = (s.top()+g.top())/2;
        }
        cout<<med<<" ";
    }
    cout<<endl;
}