
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
  
    std::queue<node *> queue;
    
    node *tempNode=root;
    
    while(tempNode!=NULL)
    {
        cout<<tempNode->data<<" ";
        if(tempNode->left!=NULL)
        queue.push(tempNode->left);
        if(tempNode->right!=NULL)
        queue.push(tempNode->right);
        tempNode=queue.front();
        queue.pop();
    }
  
}
