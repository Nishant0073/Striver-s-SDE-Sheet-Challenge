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
void inorder(BinaryTreeNode<int>* root,vector<BinaryTreeNode<int>*>&v)
{
    if(!root)return;
    inorder(root->left,v);
    v.push_back(root);
    inorder(root->right,v);
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    // Write your code here
    vector<BinaryTreeNode<int>*> nodes;
    inorder(root,nodes);
  
    BinaryTreeNode<int>*  head = new BinaryTreeNode<int>(-1);;
    BinaryTreeNode<int>* prev = head;
    
    int i=0;
    while(i<nodes.size())
    {
        prev->right = nodes[i];
        nodes[i]->left = prev;
        prev = nodes[i];
        i++;
    }
    return head->right;
}
