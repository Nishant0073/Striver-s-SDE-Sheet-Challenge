/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
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
void inorder(TreeNode<int> *root,int &k,int &ans)
{
    if(!root)
        return;
    inorder(root->right,k,ans);
     k--;
    if(k==0)  
       ans = root->data;
     
    if(k!=0)
        inorder(root->left,k,ans);
}
 
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
     int ans = -1;
    inorder(root,k,ans);
    return ans;
}

