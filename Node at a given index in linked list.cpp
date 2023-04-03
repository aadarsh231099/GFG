//https://practice.geeksforgeeks.org/problems/node-at-a-given-index-in-linked-list/0
//Node at a given index in linked list


/* Print he nth node in the linked list Node is defined as 
/* Link list node
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}; 
*/

// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
  // Code here
  if(index==1)return head->data;
  else
  {
      node* temp=head;
  for(int i=2;i<=index;i++)
  {
      temp=temp->next;
  }return temp->data;
  }
}