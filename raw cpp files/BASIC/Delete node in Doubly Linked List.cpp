//https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/0
//Delete node in Doubly Linked List

/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
        Node *temp = head_ref, *prev;
      
      if(x==1)
      head_ref = temp->next;
      
      else
      
      {
          for(int i=1; i<x;i++)
          {
              prev = temp;
              temp= temp->next;
          }
          
          prev->next = temp->next;
      }
      return head_ref;
    }
};