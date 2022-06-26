#include<bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
     vector<int>ans;
    if(root==NULL)
        return ans;
    queue<pair<TreeNode<int> *,int>>qu;
    map<int,int>mp;
    qu.push({root,0});
    while(!qu.empty())
    {
        pair<TreeNode<int> *,int> top = qu.front();
        qu.pop();
        if(mp.count(top.second)==0)
            mp[top.second] = top.first->val;
        if(top.first->left!=NULL)
            qu.push({top.first->left,top.second-1});
        if(top.first->right!=NULL)
            qu.push({top.first->right,top.second+1});
    }
   
    for(auto it:mp)
        ans.push_back(it.second);
    return ans;
}
