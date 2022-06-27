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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    queue<BinaryTreeNode<int> *>que;
    vector<int>ans;
    if(root==NULL)
        return ans;
    que.push(root);
    bool LtoR = true;
    while(!que.empty())
    {
        int size = que.size();
        vector<int>v;
        for(int i=0;i<size;i++)
        {
            auto it = que.front();;
            que.pop();
            v.push_back(it->data);
            if(it->left)
                que.push(it->left);
            if(it->right)
                que.push(it->right);
        }
        if(LtoR)
        {
            for(int i=0;i<v.size();i++)
                ans.push_back(v[i]);
        }
        else
        {
            for(int i=v.size()-1;i>=0;i--)
                ans.push_back(v[i]);
        }
        LtoR = !LtoR;
    }
    return ans;
    
}

