//https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/0
//Count nodes of linked list
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        if(head==NULL)return 0;
        Node* temp=head;
        int c=0;
        while(temp->next!=NULL)
        {c++;
        temp=temp->next;
        }
        return c+1;
    
    }
};
    