int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
        Node *h1 = head1;
        Node *h2 = head2;
        int c=0;
        while(h1!=h2){
            if(!h1) {
                h1 = head2 ;
            } else{
                h1=h1->next;
            }
            if(!h2){
                h2 = head1 ;
            }else{
                h2 = h2->next ;
            }
            
        }
        return h1->data;
}
