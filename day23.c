void levelOrder(Node* root){
  //Write your code here
    int const max = 30000;
    Node queue[max];
    int q_length = 1, q_init = 0, q_end = 0;
    queue[0] = *root;
    while(q_length > 0) {
        //dequeue element
        Node curr = queue[q_init];
        q_init = q_init + 1 == max ? 0 : q_init + 1;
        q_length--;
        //print element
        printf("%d ",  curr.data);
        //enqueue left and right elements
        if(curr.left != NULL) {
            q_end = q_end + 1 == max ? 0 : q_end + 1;
            queue[q_end] = *curr.left;
            q_length++;
        }
        if(curr.right != NULL) {
            q_end = q_end + 1 == max ? 0 : q_end + 1;
            queue[q_end] = *curr.right;
            q_length++;
        }
    }
}

