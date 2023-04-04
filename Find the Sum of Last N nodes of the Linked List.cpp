//https://practice.geeksforgeeks.org/problems/find-the-sum-of-last-n-nodes-of-the-linked-list/0
//Find the Sum of Last N nodes of the Linked List



/*Structure of the node of the linled list is as

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};
*/
// your task is to complete this function 
// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
      // Code here
      Node* temp=head;
      int c=0,sum=0;
      while(temp!=NULL)
      {
          c++;
          temp=temp->next;
      }
      int val=c-n;
      while(head!=NULL && val--)
      {
          head=head->next;
      }
      while(head!=NULL)
      {
          sum+=head->data;
          head=head->next;
      }
          return sum;
      
}