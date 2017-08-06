/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(head==NULL || head->next==NULL)
        return 0;

    Node* ahead=head;
    while(ahead->next->next!=NULL)
    {
        head = head->next;
        ahead = ahead->next->next;
        
        if(ahead==head)
        {
            return 1;
        }
    }
   
    return 0;
}