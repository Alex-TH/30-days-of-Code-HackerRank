int getHeightNoNRecursive(Node* root){
  //Write your code here
    if(root == NULL) return 0;
    Node stack[30000];
    int stackHeight[30000];
    int size = 1, maxHeight = 1;
    stack[0] = *root;
    stackHeight[0] = 1;
    while(size > 0) {
        Node curr = stack[--size];
        int currHeight = stackHeight[size];
        //printf("%d\n", curr.data);
        if(curr.right != NULL) {
            stack[size++] = *curr.right;
            stackHeight[size - 1] = currHeight + 1;
        }
        if(curr.left != NULL) {
            stack[size++] = *curr.left;
            stackHeight[size - 1] = currHeight + 1;
        } 
        if(curr.left == NULL && curr.right == NULL && currHeight > maxHeight) {
            maxHeight = currHeight;
        }
    }
    return maxHeight;
}

int getHeight(Node *root) {
    if(root == NULL) 
       return 0;
   else {
       int lHeight = getHeight(root->left);
       int rHeight = getHeight(root->right);
 
       if (lHeight > rHeight) 
           return(lHeight + 1);
       else return(rHeight + 1);
   }
}

