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
void getLeftViewFromRoot(TreeNode<int> *root,vector<int> &res,int level)
{
    if(root==NULL)
        return;
    if(res.size()==level)
        res.push_back(root->data);
    getLeftViewFromRoot(root->left,res,level+1);
    getLeftViewFromRoot(root->right,res,level+1);
    
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> res;
    getLeftViewFromRoot(root,res,0);
    return res;
}
