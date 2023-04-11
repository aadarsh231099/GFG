//https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/0
//Nth node from end of linked list



/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       int c=0;
        for(Node* temp=head;temp!=NULL;temp=temp->next)c++;
        if(n>c)return -1;
        int val=c-n;
        while(head!=NULL && val--)
        {
            head=head->next;
        }
        return head->data;
}