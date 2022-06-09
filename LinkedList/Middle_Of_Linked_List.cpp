#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    // Write your code here
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL)
    {
        if(fast->next==NULL)
            return slow;
        if(fast->next->next==NULL)
            return slow->next;
        else
        {
            slow = slow->next;
            fast = fast->next->next;
        }
    }
    return NULL;
}
