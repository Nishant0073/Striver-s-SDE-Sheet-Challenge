/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

#include<bits/stdc++.h>
************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int>ans;
    queue<BinaryTreeNode<int> *>que;
    que.push(root);
    if(root==NULL)
        return ans;
    while(!que.empty())
    {
        auto top = que.front();
        que.pop();
        ans.push_back(top->val);
        if(top->left)
            que.push(top->left);
        if(top->right)
            que.push(top->right);
    }
    return ans;
}
