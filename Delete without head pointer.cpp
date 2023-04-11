//https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/0
//Delete without head pointer

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       if(del==NULL)return;
       if(del->next==NULL)return;
       Node* temp=del->next;
       del->data=del->next->data;
       del->next=del->next->next;
       free(temp);
       
    }

};