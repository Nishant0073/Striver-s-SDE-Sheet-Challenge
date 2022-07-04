#include<bits/stdc++.h>
vector<int> findMedian(vector<int> &arr, int n){
	
	// Write your code here 
    vector<int>ans;
    priority_queue<int> mxheap;
    priority_queue<int,vector<int>, greater<int>> mnheap;
    for(int i=0;i<n;i++)
    {
         if(i%2==0)
         {
             mnheap.push(arr[i]);
             mxheap.push(mnheap.top());
             mnheap.pop();
             ans.push_back(mxheap.top());
         }
        else
        {
            mxheap.push(arr[i]);
            mnheap.push(mxheap.top());
            mxheap.pop();
            int num = (mxheap.top()+mnheap.top())/2;
            ans.push_back(num);
        }
    }
    return ans;
}

