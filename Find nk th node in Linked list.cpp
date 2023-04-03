//https://practice.geeksforgeeks.org/problems/find-nk-th-node-in-linked-list/0
//Find nk th node in Linked list


/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
int fractional_node(struct Node *head, int k)
{
    // your code here
    Node *temp=head;
    int c=0;
    while(temp->next!=NULL){
        c++;
        temp=temp->next;
    }
    int n=ceil(c/k);
    for(int i=1;i<=n;i++)
    {
        head=head->next;
    }
     return head->data;
}