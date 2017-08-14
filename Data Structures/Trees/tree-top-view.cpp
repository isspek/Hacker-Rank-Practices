/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void topViewHelper(node* root,bool isLeft)
{
    if(root==NULL)
        return;
    
    if(isLeft)
    {
      topViewHelper(root->left,true);
      cout<<root->data<<" "; 
    }
    else
    {
      cout<<root->data<<" "; 
      topViewHelper(root->right,false);
    }

}

void topView(node * root) {
 
  if(root==NULL)
      return;
   topViewHelper(root,true);
   topViewHelper(root->right,false);
}

