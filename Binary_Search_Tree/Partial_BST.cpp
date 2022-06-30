/*************************************************************
 
    Following is the Binary Tree node structure

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
bool isValid(BinaryTreeNode<int> *root,int upb,int lwb)
{
    if(root==NULL)
        return true;
    if(root->data>upb || root->data<lwb )
        return false;
   
    return (isValid(root->left,root->data,lwb) && isValid(root->right,upb,root->data));
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    return isValid(root,INT_MAX,INT_MIN);
}
