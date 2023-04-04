//https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/0
//Linked List Length Even or Odd



/*structure of a node of the linked list is as
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
     int c=0;
     while(head!=NULL)
     {
         c++;
         head=head->next;
     }return(c%2!=0);
}