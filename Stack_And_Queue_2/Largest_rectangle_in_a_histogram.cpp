#include<bits/stdc++.h> 
int largestRectangle(vector < int > & heights) {
   // Write your code here
    stack<int>st;
    st.push(0);
    int n =  heights.size();
    vector<int>left(n);
    left[0] = 0;
     for(int i=1;i<n;i++)
     {
         while(st.size()!=0 && heights[st.top()]>=heights[i])
         {
             st.pop();
         }
         if(st.size()==0)
             left[i] = 0;
         else
             left[i] = st.top()+1;
         st.push(i);
     }
    
    while(st.size()!=0)
        st.pop();
    vector<int>right(n);
    st.push(n-1);
    right[n-1] = n-1;
    for(int i=n-2;i>=0;i--)
    {
         while(st.size()!=0 && heights[st.top()]>=heights[i])
         {
             st.pop();
         }
         if(st.size()==0)
             right[i] = n-1;
         else
             right[i] = st.top()-1;
         st.push(i);
    }
    int mxn = 0;
    for(int i=0;i<n;i++)
    {
      //  cout<<right[i]<<" ";
        mxn = max(mxn,((right[i]-left[i])+1)*heights[i]);
    }
 /// cout<<endl;
    return mxn;
 }
