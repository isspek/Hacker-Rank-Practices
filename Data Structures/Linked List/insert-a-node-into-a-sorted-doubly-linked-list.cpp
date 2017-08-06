/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
   if(head==NULL)
   {
       Node *newNode = (Node*)malloc(sizeof(Node));
       newNode->data=data; 
       return newNode;
   }
   else if(head->data>data)
   {
       Node *newNode = (Node*)malloc(sizeof(Node));
       newNode->data=data; 
       newNode->next = head;
       head->prev = newNode;
       return newNode;
   }
   else
   {
      head->next = SortedInsert(head->next, data);
      head->next->prev = head;
      return head;
   }
}