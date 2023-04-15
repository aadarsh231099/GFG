//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void append(struct Node** headRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

int modularNode(Node* head, int k);

// Driver program to test above
int main()
{
    int t;
    cin>>t;
    while(t--){
        struct Node* head = NULL;
        int n, tmp, k;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        cin>>k;
        cout<<modularNode(head, k)<<endl;
    }
	return 0;
}

// } Driver Code Ends



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
