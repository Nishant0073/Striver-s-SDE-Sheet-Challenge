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

class BSTiterator
{
    public:
    vector<int> v;
    int i
        ;
    void inorder(TreeNode<int> *root,vector<int>&v)
    {
        if(root==NULL)
            return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
        inorder(root,v);
        i=0;
        
    }

    int next()
    {
        // write your code here
        if(i<v.size())
            return v[i++];

    }

    bool hasNext()
    {
        // write your code here
        return i<v.size();
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/
