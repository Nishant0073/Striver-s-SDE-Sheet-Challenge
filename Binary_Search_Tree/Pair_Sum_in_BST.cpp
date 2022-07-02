#include<bits/stdc++.h>
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
 class BSTIterator{
     public:
     stack<BinaryTreeNode<int>*>st;
     /*
     reverse -> true  == back;
     reverse -> false == next;
     */
     bool reverse = true;
     BSTIterator(BinaryTreeNode<int>* root,bool rev)
     {
         reverse = rev;
         pushAll(root);
         
     }
     
     void pushAll(BinaryTreeNode<int>* root)
     {
         while(root)
         {
             st.push(root);
             if(reverse==false)
                 root = root->left;
             else
                 root = root->right;
         }
     }
     bool hasNext()
     {
         return !st.empty();
     }
     int next()
     {
     
         BinaryTreeNode<int>* node = st.top();
         st.pop();
         if(reverse==false)
             pushAll(node->right);
         else
             pushAll(node->left);
         return node->data;
     }
     
 };
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    if(!root)
        return false;
    BSTIterator l(root,false);
    BSTIterator r(root,true);
    int i = l.next();
    int j =  r.next();
    while(i<j)
    {
        if(i+j==k)
            return true;
        if(i+j<k)
            i = l.next();
        else
            j = r.next();
    }

    return false;
}
