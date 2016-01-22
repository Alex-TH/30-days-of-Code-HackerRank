/*int getHeight(Node* root){
  //Write your code here
    if(root == NULL) return 0;
    Node stack[30000];
    int size = 1, height = 1, maxHeight = 1;
    stack[0] = *root;
    while(size > 0) {
        if(stack[size - 1].left == NULL) {
            if(stack[size - 1].right == NULL) {
                maxHeight = height > maxHeight ? height : maxHeight;
                while(stack[size - 1].right == NULL && size > 0) {
                    size--;
                    height--;
                }
                if(size > 0 && stack[size - 1].right != NULL) {
                    stack[size - 1] = *stack[size - 1].right;
                    height++;
                }
                //printf("%d\n", height);
            }
            else {
                stack[size - 1] = *stack[size - 1].right;
                height++;
            }
        }
        else {
            stack[size] = *stack[size - 1].left;
            size++;
            height++;
        }
    }
    return maxHeight;
}*/

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

