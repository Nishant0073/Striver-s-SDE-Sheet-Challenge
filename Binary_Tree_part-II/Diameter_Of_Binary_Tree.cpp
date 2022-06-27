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

int getDia(TreeNode<int> *root,int &maxD)
{
    if(root==NULL)
        return 0;
    int leftd = getDia(root->left,maxD);
    int rightd = getDia(root->right,maxD);
    maxD = max(maxD,leftd+rightd);
    return (max(leftd,rightd)+1);
    
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    int maxD = 0;
	// Write Your Code Here.
    getDia(root,maxD);
    return maxD;
}

