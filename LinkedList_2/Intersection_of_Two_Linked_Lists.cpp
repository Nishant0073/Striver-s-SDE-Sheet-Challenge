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

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    int n1 = 0;
    int n2 = 0;    
    Node* node1 = firstHead;
    Node* node2 = secondHead;
    
    while(node1!=NULL)
    {
        node1 = node1->next;
        n1++;
    }
    while(node2!=NULL)
    {
        node2 = node2->next;
        n2++;
    }
    node1 = firstHead;
    node2 = secondHead;
    if(n2<n1)
        swap(node1,node2);
    int k = abs(n1-n2);
    while(k>0)
    {
        node2 = node2->next;
        k--;
    }
    while(node1!=NULL && node2!=NULL)
    {
        if(node1==node2)
            return node1->data;
        node1  = node1->next;
        node2  = node2->next;
    }
    return -1;
        
}
