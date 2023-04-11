//https://practice.geeksforgeeks.org/problems/delete-alternate-nodes/0
//Delete Alternate Nodes


/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    // Code here
    Node* prev=head;
    Node* temp=head->next;
    while(prev!=NULL && temp!=NULL)
    {
        prev->next=temp->next;
        prev=prev->next;
        if(prev!=NULL)
        temp=prev->next;
    }
}