//https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0
//Linked List Insertion

/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* n=new Node(x);
       n->next=head;
       head=n;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node* n=new Node(x);
       if(head==NULL)
        {
            return n;
        }
        Node *last=head;
        while(last->next!=NULL)
        {
            last=last->next;
        }last->next=n;
        return head;
    }
};