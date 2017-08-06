/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
 Node* realHead = head;

  while(head != NULL && head->next != NULL) {
      if(head->data == head->next->data) {
          Node * del = head->next;
          head->next = head->next->next;
          delete del;
      }
      else {
          head = head->next;
      }
  }

  return realHead;
}