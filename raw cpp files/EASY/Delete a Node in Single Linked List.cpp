//https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/0
//Delete a Node in Single Linked List



/* Link list Node 
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

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{       Node* temp=head;
    if(x==1){
        temp=temp->next;
        return temp;
    }
    
    for(int i=2;i<x;i++)
        {
            temp=temp->next;
    }temp->next=temp->next->next;
    return head;
    
    //Your code here
    }