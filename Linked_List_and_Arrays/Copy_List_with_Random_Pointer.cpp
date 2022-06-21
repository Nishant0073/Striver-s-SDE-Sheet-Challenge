#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    if(head==NULL)
        return head;
    unordered_map<LinkedListNode<int>*,LinkedListNode<int>*>mp;
    LinkedListNode<int> *trav = head;
    while(trav!=NULL)
    {
        LinkedListNode<int> *node = new LinkedListNode<int>(trav->data);
        mp.insert({trav,node});
        trav = trav->next;
    }
    
    trav = head;
    while(trav!=NULL)
    {
        if(trav->random==NULL)
            mp[trav]->random = NULL;
        else
            mp[trav]->random =  mp[trav->random];
        trav = trav->next;
    }
    
    LinkedListNode<int> *dummy = new LinkedListNode<int>(-1);
    LinkedListNode<int> *start= dummy;
    LinkedListNode<int> *trav1 = start;
    trav = head;
   while(trav!=NULL)
    {
       trav1->next = mp[trav];
       trav = trav->next;
       trav1 = trav1->next;
    }
    return start->next;
    
}

