Node* insert(Node *head,int data)
      {
          //Complete this method
          Node* element = new Node(data);
          Node* aux = head;
          if(head == NULL){
              return element;
          }
          while(aux->next != NULL) aux = aux->next;
          aux->next = element;
          return head;
      }

