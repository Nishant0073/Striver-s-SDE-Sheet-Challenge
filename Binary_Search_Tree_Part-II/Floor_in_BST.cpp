/************************************************************

    Following is the TreeNode class structure

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
void findNode(TreeNode<int> * root, int X,int &ans)
{
    if(root==NULL)
        return;
    if(root->val>X)
        return findNode(root->left,X,ans);
    ans = max(ans,root->val);
    return findNode(root->right,X,ans);
}

int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int ans = -1;
    findNode(root,X,ans);
    return ans;
}
