//https://practice.geeksforgeeks.org/problems/implement-stack-using-array/0
//Implement stack using array


//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    // Your Code
    if(top>=1000-1)
    return;
    else
    arr[++top]=x;
    
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code     
    if(top<0)return -1;
    else
    return(arr[top--]);
}