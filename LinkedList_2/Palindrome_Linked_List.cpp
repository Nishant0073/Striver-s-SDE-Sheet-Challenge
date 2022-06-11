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
int getLength(LinkedListNode<int> *head)
{
    if(head==NULL)
        return 0;
    int cnt = 1;
    while(head!=NULL)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
   int n = getLength(head);
    if(n<=1)
        return true;
    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    LinkedListNode<int> *curr = slow->next;
    LinkedListNode<int> *next = NULL;
    LinkedListNode<int> *prev = NULL;
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    while(prev!=NULL)
    {
        if(head->data!=prev->data)
            return false;
        head = head->next;
        prev = prev->next;
    }
    
    return true;
}
