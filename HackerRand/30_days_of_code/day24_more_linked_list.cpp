Node* removeDuplicates(Node *head) {
  Node *myNode = head;
  while(myNode->next != NULL) {
    if(myNode->data == myNode->next->data) {
      myNode->next = myNode->next->next;
    }
    else { myNode = myNode->next; }
  }
  return head;
}
