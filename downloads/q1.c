// Question 1: Given a string str containing lowercase letters and digits, remove all adjacent duplicate characters and digits and return the resulting string.
// Explanation:
// Input: str = "aa11abc22cc"
// Output: abc

#include <stdio.h>
#include <string.h>

char stack[1000],top=-1;
void push(char);
char pop(void);
void main()
{
    char str[1000];
    printf("Enter input string\n");
    scanf("%s",str);
    int i=0;
    // printf("%d",strlen(str));
    while (i<strlen(str))
    {
        if(top!=-1 && stack[top]==str[i])
        {
            while(i<strlen(str) && str[i]==stack[top])
            i++;
            top--;
        }
        if(i<strlen(str))
        {
            stack[++top]=str[i];
            i++;
        }
    }
    for(int i=0;i<=top;i++)
    printf("%c",stack[i]);
}
    
    void push(char x)
{
    if(top>=1000)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        // printf(" Enter a value to be pushed:");
        top++;
        stack[top]=x;
    }
}
char pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
        return ' ';
    }
    else
    {
        return stack[top--];
    }
}    