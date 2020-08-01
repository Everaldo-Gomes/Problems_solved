Node* insert(Node *head,int data) {
  Node *my_node = new Node(data);
  Node *tail = head;

  if(head == NULL) { return my_node; }
  else {
    while(tail->next != NULL) { tail = tail->next; }  //go to the last node (tail)
    tail->next = my_node; //add the node
  }
  return head;
}
