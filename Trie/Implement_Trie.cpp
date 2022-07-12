/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */
class trienode
{
public:
    char data;
    trienode *children[26];
    bool isterminal;
    trienode(char data)
    {
        this->data = data;
        this->isterminal = false;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
    }
};

class Trie {
public:
    trienode *root;
    Trie()
    {
        root = new trienode('\0');
    }

    /** Inserts a word into the trie. */
void inserthelper(trienode *root, string word)
    {
        if (word.size() == 0)
        {
            root->isterminal = true;
            return;
        }
        int index = word[0] - 'a';
        trienode *child;
        if (root->children[index] != NULL)
        {

            child = root->children[index];
        }
        else
        {
            child = new trienode(word[0]);
            root->children[index] = child;
        }
        inserthelper(child, word.substr(1));
    }
    void insert(string word) {
        inserthelper(root,word);
    }

    /** Returns if the word is in the trie. */
    bool searchhelper(trienode *root, string word)
    {
        if (word.size() == 0)
        {
            if (root->isterminal == true)
            {
                return true;
            }
            return false;
        }
        int index = word[0] - 'a';
        trienode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        bool ans = searchhelper(child, word.substr(1));
        return ans;
    }
    bool search(string word) {
       
        return searchhelper(root,word);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool searchprefix(trienode* root,string word){
        
        if(word.size()==0){
            return true;
        }
        trienode* child;
        int index=word[0]-'a';
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            return false;
        }
        bool ans=searchprefix(child,word.substr(1));
        return ans;
    }
    bool startsWith(string word) {
     
        return searchprefix(root,word);
    }
};
