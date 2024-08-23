#include<iostream>
using namespace std;

void push(char st[],char ch , int * top)
{
    st[++(*top)]=ch;
}
char pop(char st[],int * top)
{
    char ch=st[*top];
    (*top)--;
    return ch;
}
bool isEmpty(int top)
{
    if(top==-1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int n;
    int top=-1;
    int flag=0;
    printf("enter string of paranthesis");
    string st;
    string s;

    gets(s);
    for(int i=0  ; i< s.length() ; i++)
    {
        if(s[i]=='(')
        {
            push(st,s[i],&top);
        }
        else if(s[i]==')' && !isEmpty(top))
        {
            char ch=pop(st,&top);
        }
        else{
            printf("not matched");
            flag==1;
            break;
        }
    }
    if(flag)
    {
        printf("matched");
    }
    else{
        printf("not matched");  
    }

}