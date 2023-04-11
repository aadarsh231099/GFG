//https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/0
//Insert in Middle of Linked List


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node* n=new Node(x);
	Node *temp=head;
	Node *curr=NULL;
	int c=0;
	while(temp!=NULL)
	{
	    c++;
	    temp=temp->next;
	}
	int num=(c%2==0)?c/2:((c+1)/2);
	temp=head;
	for(int i=1;i<num;i++)
	{
	    temp=temp->next;
	}n->next=temp->next;
	temp->next=n;
	return head;
}