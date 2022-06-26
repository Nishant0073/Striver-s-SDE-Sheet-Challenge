#include<bits/stdc++.h>
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){
    map<int,int>mp;
    
     queue<pair<BinaryTreeNode<int>* ,int>> qu;
    qu.push({root,0});
    while(!qu.empty())
    {
        pair<BinaryTreeNode<int>*,int> top = qu.front();
        qu.pop();
        mp[top.second] = top.first->data;
        if(top.first->left!=NULL)
            qu.push({top.first->left,top.second-1});
         if(top.first->right!=NULL)
            qu.push({top.first->right,top.second+1});
    }
    vector<int>v;
    for(auto it:mp)
        v.push_back(it.second);
    return v;
    // Write your code here.
    
}

