Node* removeDuplicates(Node *head){
    //Write your code here
    if(head != NULL) {
        Node* start = head;
        while(start->next != NULL) {
            if(start->data == start->next->data) {
                start->next = start->next->next;
            }
            else {
                start = start->next;
            }
        }
    }
    return head;
}

