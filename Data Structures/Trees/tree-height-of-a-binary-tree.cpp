/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        if(root==NULL)
        {
            return -1;
        }
        int leftHeight=1+height(root->left);
        int rightHeight=1+height(root->right);
        return ((leftHeight>rightHeight)?leftHeight:rightHeight);
    }
  