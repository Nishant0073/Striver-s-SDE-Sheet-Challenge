#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
     LinkedListNode<int> *start = new LinkedListNode<int>(-1);
     LinkedListNode<int> *slow = start;
     LinkedListNode<int> *fast = start;
    if(head==NULL || K==0)
       return head;
    start->next = head;
    while(K>0)
    {
        fast = fast->next;
        K--;
    }
    
    while(fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return start->next;
}




