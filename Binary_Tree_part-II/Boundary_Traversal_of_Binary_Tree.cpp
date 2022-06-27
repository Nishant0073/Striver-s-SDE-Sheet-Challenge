/************************************************************

    Following is the Binary Tree node structure:
    
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
bool isLeaf(TreeNode<int>* root){
    return !root->left && !root->right;
}

void addLeft(TreeNode<int>* root,vector<int>&v)
{
    TreeNode<int>* cur = root->left;
    while(cur)
    {
        if(!isLeaf(cur))
            v.push_back(cur->data);
        if(cur->left)
            cur = cur->left;
        else
            cur = cur->right;
    }
}

void addRight(TreeNode<int>* root,vector<int>&v)
{
    TreeNode<int>* cur = root->right;
    vector<int>temp;
    while(cur)
    {
        if(!isLeaf(cur))
            temp.push_back(cur->data);
        if(cur->right)
            cur = cur->right;
        else
            cur = cur->left;
    }
    for(int i=temp.size()-1;i>=0;i--)
        v.push_back(temp[i]);
    
}

void addLeaves(TreeNode<int>* root,vector<int>&v)
{
    if(isLeaf(root))
    {
        v.push_back(root->data);
        return;
    }
    if(root->left)
        addLeaves(root->left,v);
    if(root->right)
        addLeaves(root->right,v);
}
vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int>res;
    if(!root)
        return res;
    if(!isLeaf(root))
        res.push_back(root->data);
    addLeft(root,res);
    addLeaves(root,res);
    addRight(root,res);
    return res;
}
