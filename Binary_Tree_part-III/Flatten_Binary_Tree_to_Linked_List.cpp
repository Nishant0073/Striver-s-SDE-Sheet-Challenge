/************************************************************

    Following is the TreeNode class structure.

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
TreeNode<int> *p = NULL;
void getTree(TreeNode<int> *root)
{
    if(root==NULL)
        return;
    getTree(root->right);
    getTree(root->left);
    root->right  = p;
    root->left = NULL;
    p = root;
}

TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    p = NULL;
    getTree(root);
    return root;
}
