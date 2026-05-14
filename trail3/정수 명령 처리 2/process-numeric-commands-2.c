#include <stdio.h>
#include <string.h>

int n;
char command[10];
int push_val;

int q[10001];
int front=0, rear=0;

void push(int val)
{
    q[rear++]=val;
}
int pop()
{
    return q[front++];
}
int size()
{
    return rear-front;
}
int empty()
{
    if(front==rear)
        return 1;
    return 0;
}
int front_()
{
    return q[front];
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", command);
        if (strcmp(command, "push") == 0) {
            scanf("%d", &push_val);
            push(push_val);
        }
        else if (strcmp(command, "pop") == 0) 
        {
            printf("%d\n",pop());
        }
        else if (strcmp(command, "size") == 0)
        {
            printf("%d\n",size());
        }
        else if (strcmp(command, "empty") == 0)
        {
            printf("%d\n",empty());
        }
        else if (strcmp(command, "front") == 0)
        {
            printf("%d\n",front_());
        }
    }
    // Please write your code here.
    return 0;
}