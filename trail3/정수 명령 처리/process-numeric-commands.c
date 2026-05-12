#include <stdio.h>
#include <string.h>

int n;
char command[10];
int value;

int s[10000];
int pos=0;
void push(int value)
{
    s[pos++]=value;
}
int pop()
{
    pos--;
    return s[pos];
}
int size()
{
    return pos;
}
int empty()
{
    if(pos==0)
        return 1;
    return 0;
}
int top()
{
    return s[pos-1];
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", command);
        if (strcmp(command, "push") == 0) {
            scanf("%d", &value);
            push(value);
        }
        // Please write your code here.
        else if(strcmp(command,"size")==0)
            printf("%d\n",size());
        else if(strcmp(command,"empty")==0)
            printf("%d\n",empty());
        else if(strcmp(command,"pop")==0)
            printf("%d\n",pop());
        else if(strcmp(command,"top")==0)
            printf("%d\n",top());

    }
    return 0;
}