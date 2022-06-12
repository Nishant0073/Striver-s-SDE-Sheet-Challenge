#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
    if(head==NULL || head->next==NULL || k==0)
        return head;
    int len = 1;
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
        ++len;
    }
    
    k = k%len;
    temp->next = head;
    int end = len-k;
    while(end--)
    {
        temp = temp->next;
    }
    head = temp->next;
    temp->next = NULL;
    
    return head;
}
