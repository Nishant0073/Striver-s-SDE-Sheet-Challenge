/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

long long int findPath(TreeNode<int> *root,long long &ans)
{
    if(!root)
        return 0;
    long long left = findPath(root->left,ans);
    long long right = findPath(root->right,ans);
    ans = max(left+right+root->val,ans);
    return max(left,right)+root->val;
}
long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
  
    if(!root || !root->left || !root->right)
        return -1;
    long long  ans  = 0;
    findPath(root,ans);
    return ans;   
}
