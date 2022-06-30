#include<bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
TreeNode<int>* getTree(vector<int> &v,int &i,int upb)
{
    if(i==v.size() || v[i]>upb )
        return NULL;
    TreeNode<int> *root = new TreeNode<int>(v[i++]);
    root->left = getTree(v,i,root->data);
    root->right = getTree(v,i,upb);
    return root;
}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.
    int i=0;
    return getTree(preOrder,i,INT_MAX);
}
