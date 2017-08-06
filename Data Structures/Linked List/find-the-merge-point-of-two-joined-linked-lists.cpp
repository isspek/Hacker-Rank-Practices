/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int  findMergedData(Node *headBig,Node* headSmall,int dif)
{
    while(dif-->0)
    {
        headBig=headBig->next;
    }
    while(headBig->next!=NULL)
    {
        if(headBig==headSmall)
        {
            return headBig->data;
        }
        headBig=headBig->next;
        headSmall=headSmall->next;
    }
    return headBig->data;
}


int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    int lenA=0;
    int lenB=0;
    Node *temp=headA;
    while(temp->next!=NULL)
    {
        lenA++;
        temp=temp->next;
    }
    
    temp=headB;
    
    while(temp->next!=NULL)
    {
        lenB++;
        temp=temp->next;
    }
    
    int mergedData=0;
    int dif=0;
    
    if(lenA>lenB){
        dif=lenA-lenB;
        mergedData=findMergedData(headA,headB,dif);    
    }
    else{
        dif=lenB-lenA;
        mergedData=findMergedData(headB,headA,dif);
    }
    return mergedData;
}

