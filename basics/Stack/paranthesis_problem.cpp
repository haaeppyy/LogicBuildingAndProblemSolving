#include<iostream>
#include <string>
using namespace std;

void push(char *st,char ch , int * top)
{
    st[++(*top)]=ch;
}
char pop(char *st,int * top)
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
    int flag=1;
    printf("enter string of paranthesis");
    char st[20];
    string s;
    cin>>s;
    for(int i=0  ; i< s.length() ; i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            push(st,s[i],&top);
        }
        else if(s[i]==')'|| s[i]=='}' || s[i]==']' && !isEmpty(top))
        {
            if(isEmpty(top)){
                flag=0;
                break;
            }
        }
        pop(st,&top);
        flag = 1;
    }
    if(!flag)
    {
        printf("matched");
    }
    else{
        printf("not matched");  
    }

}