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
int getHeight(BinaryTreeNode<int>* root,bool &isBal)
{
    if(root==NULL)
        return 0;
    if(!isBal)
        return 0;
    int leftH = getHeight(root->left,isBal);
    int rightH = getHeight(root->right,isBal);
    int deff = abs(leftH-rightH);
    if(deff>1)
    {
        isBal = false;
        return 0;
    }
    return max(leftH,rightH)+1;
    
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    bool isBal = true;
    getHeight(root,isBal);
    return isBal;
    
}
