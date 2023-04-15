//https://practice.geeksforgeeks.org/problems/circular-linked-list/0
//Check If Circular Linked List



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

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL)return true;
   Node* last=head->next;
   while(last!=NULL && last!=head)
   {
       last=last->next;
   }return(last==head);
}