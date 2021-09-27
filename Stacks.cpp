// solution of valid parenthesis leetcode using stack

struct Node
{
    int data;
    Node *link;
};Node *top=NULL;

bool isEmpty()
{
    if (top==NULL)
        return true;
    return false;
}

void push (int val)
{
    Node *ptr = new Node();
    ptr -> data = val;
    ptr -> link=top;
    top = ptr;
}

void pop()
{
    if(!isEmpty())
    {
        Node *ptr = top;
        top = top->link;
        delete (ptr);
    }
}

int showTop()
{
    if(!isEmpty())
        return (top->data);
    else
        return (-1);
}

class Solution 
{
public:
    bool isValid(string s) 
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                push(1);
            if(s[i]=='[')
                push(2);
            if(s[i]=='{')
                push(3);
            
            if(s[i]==')')
            {
                if (showTop()==1)
                    pop();
                else
                {
                    push(1);
                    break;
                }
            }
            if(s[i]==']')
            {
                if (showTop()==2)
                    pop();
                else
                {
                    push(1);
                    break;
                }
            }
            if(s[i]=='}')
            {
                if (showTop()==3)
                    pop();
                else
                {
                    push(1);
                    break;
                }
            }  
        }
        
        if(isEmpty())
            return true;
        else
        {
            while(!isEmpty())
                pop();
            return false;
        }
        
    }
};
