/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
void inorder(BinaryTreeNode<int>* root,vector<int> &v)
{
    if(root==NULL)
        return;
    inorder(root->left,v);
    v.push_back(root->data);
      inorder(root->right,v);
    
}

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    vector<int>v;
    inorder(root,v);
    int n = v.size();
    for(int i=0;i<n;i++)
    {
      if(v[i]==key)    
      {
          if(i==0  && i+1<n )
              return {-1,v[i+1]};
          
          if(i==n-1 && i-1>=0)
              return {v[i-1],-1};
          if(i-1>=0 && i+1<=n-1)
              return {v[i-1],v[i+1]};
           return {-1,-1};
      }
    }
    
     return {-1,-1};
}

