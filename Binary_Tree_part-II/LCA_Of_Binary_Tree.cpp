/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int> * getNode(TreeNode<int> *root, int x, int y)
{
    if(root==NULL || root->data== x || root->data == y)
        return root;
    TreeNode<int> * left = getNode(root->left,x,y);
    TreeNode<int> * right = getNode(root->right,x,y);
    
    if(left==NULL)
        return right;
    else if(right==NULL)
        return left;
    else
        return root;
}
int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	 root =  getNode(root,x,y);
    return root->data;
    
}
