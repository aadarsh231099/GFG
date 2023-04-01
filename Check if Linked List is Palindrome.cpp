//https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/0
//Check if Linked List is Palindrome

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

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        stack<int> s;
        Node* temp=head;
        while(temp!=NULL)
        {
            s.push(temp->data);
            temp=temp->next;
        }
        int i;
        while(head!=NULL)
        {
            i=s.top();
            s.pop();
            if(head->data!=i)
            return false;
            head=head->next;
        }return true;
    }
};
