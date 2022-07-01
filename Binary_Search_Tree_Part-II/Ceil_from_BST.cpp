/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
void findNum(BinaryTreeNode<int> *node, int x,int &ans)
{
    if(node==NULL)
        return;
    if(node->data<x)
        return findNum(node->right,x,ans);
    ans = min(node->data,ans);
    return findNum(node->left,x,ans);
}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ans = INT_MAX;
    findNum(node,x,ans);
    if(ans==INT_MAX)
        ans = -1;
    return ans;
    
}
