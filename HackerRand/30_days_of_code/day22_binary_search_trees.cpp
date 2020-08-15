int getHeight(Node* root){
  if(root == NULL) { return -1; }
  int l = getHeight(root->left);
  int r = getHeight(root->right);
  return max(l,r) + 1; 
}
