Node* solve(Node* head, int n, int b[], int i)
{
    if(head==NULL) return NULL ;
    if(i==n) return head ;
    if(b[i]==0) return solve(head, n, b, i+1) ;
    Node *curr=head, *prev=NULL, *forward=NULL ;
    while(curr and b[i]--)
    {
        forward=curr->next ;
        curr->next=prev ;
        prev=curr ;
        curr=forward ;
    }
    head->next=solve(forward, n, b, i+1) ;
    return prev ;
}
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
    head=solve(head, n, b, 0) ;
    return head ;
}
