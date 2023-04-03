//https://practice.geeksforgeeks.org/problems/print-linked-list-elements/0
//Print Linked List elements
/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/

class Solution
{
    public:
    void display(Node *head)
    {
      //your code goes here
      while(head!=NULL){
          cout<<head->data<<" ";
          head=head->next;
      }
    }
};