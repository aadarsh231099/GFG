//https://practice.geeksforgeeks.org/problems/modular-node/0
//Modular Node


/*Struture of the node of the linked list is as:

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
int modularNode(Node* head, int k)
{
	// Code here
	Node* temp=head;
	while(temp->next!=NULL)
	{
	    temp=temp->next;
	}
	int i = 1,c=0;
    Node* m = NULL;
    for (Node* temp = head; temp != NULL; temp = temp->next) {
        if (i % k == 0) 
           { m = temp;
           c++; }
        
        i++;
    }
    if(c==0)return -1;
    else
    return m->data;
	
	/*Node *prev=NULL,*temp=head,*next=NULL;int c=0;
        while(temp!=NULL)
        {
            
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
            
            
        }head=prev;
        while(head->next!=NULL)
        {
            c++;
            if(((c%k)-1)==0)
            return head->data;
            head=head->next;
            
        }return -1;*/
	
}