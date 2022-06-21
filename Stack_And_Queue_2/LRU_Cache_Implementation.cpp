#include<bits/stdc++.h>
 
class LRUCache
{
public:
    class Node{
       public:
        int key;
        int val;
        Node *next;
        Node *prev;
        Node(int key,int val)
        {
            this->key = key;
            this->val = val;
        }
    };
    Node *head = new Node(-1,-1);
    Node *tail = new Node(-1,-1);
    unordered_map<int,Node*> mp;
    int cap = 0;
    LRUCache(int capacity)
    {
        // Write your code here
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node *node)
    {
        Node *temp = head->next;
        node->next = temp;
        node->prev = head;
        temp->prev = node;
        head->next = node;
    }
    void deleteNode(Node *node)
    {
        Node *delnext = node->next;
        Node *delprev = node->prev;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    
    int get(int key)
    {
        // Write your code here
        if(mp.find(key)!=mp.end())
        {
            Node *node = mp[key];
            int x = node->val;
            mp.erase(key);
            deleteNode(node);
            addNode(node);
            mp[key] = head->next;
            return x;
        }
        return -1;
    }

    void put(int key, int value)
    {
        // Write your code here
        if(mp.find(key)!=mp.end())
        {
            Node *node = mp[key];
            mp.erase(key);
            deleteNode(node);
        }
        if(mp.size()==cap)
        {
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new Node(key,value));
        mp[key] = head->next;
    }
};

