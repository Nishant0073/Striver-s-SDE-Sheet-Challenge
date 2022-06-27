#include<bits/stdc++.h>
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
    vector<int>ans;
    map<int,map<int,vector<int>>> mp;
    queue<pair<TreeNode<int>* ,pair<int,int>>>qe;
    qe.push({root,{0,0}});
    if(root==NULL)
        return ans;
    while(!qe.empty())
    {
        auto top = qe.front();
        qe.pop();
        TreeNode<int> *node = top.first;
        int x = top.second.first;
        int y = top.second.second;
        mp[x][y].push_back(node->data);
        if(node->left!=NULL)
            qe.push({node->left,{x-1,y+1}});
        if(node->right!=NULL)
            qe.push({node->right,{x+1,y+1}});
    }

    for(auto i:mp)
    {
        for(auto j:i.second)
        {
            for(auto it:j.second)
                ans.push_back(it);
        }
    }
    return ans;
}
