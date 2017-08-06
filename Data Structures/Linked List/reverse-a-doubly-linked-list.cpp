/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
    if(head==NULL)
    {
        return head;
    }
    
    if(head->next==NULL)
    {
        head->next=head->prev;
        head->prev=NULL;
        return head;
    }

    Node* nextNode=head->next;
    head->next=head->prev;
    head->prev=nextNode;

    return Reverse(head->prev);
}
