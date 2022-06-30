#include<bits/stdc++.h>
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
    
    queue<pair<BinaryTreeNode< int > *,int>>q;
    q.push({root,1});
    while(!q.empty())
    {
        auto top = q.front();
        BinaryTreeNode< int > * currNode = top.first;
        int currLevl = top.second;
        q.pop();
        if(q.empty() || q.front().second!=currLevl)          
            currNode->next = NULL;
        else
            currNode->next = q.front().first;
        
        if(currNode->left!=NULL)
            q.push({currNode->left,currLevl+1});
        if(currNode->right!=NULL)
            q.push({currNode->right,currLevl+1});
    }
}
