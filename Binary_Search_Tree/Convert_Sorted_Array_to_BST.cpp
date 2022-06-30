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
TreeNode<int>* makeBST(vector<int> &arr,int l,int r)
{
    if(l>r)
        return NULL;
    int mid = (l+r)/2;
    TreeNode<int>*  node = new TreeNode<int>(arr[mid]);
    node->left = makeBST(arr,l,mid-1);
    node->right = makeBST(arr,mid+1,r);
    return node;
}


TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    return makeBST(arr,0,n-1);
}
