#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n;
char command[20];

typedef struct node{
    int data;
    struct node* next;
    struct node* prev ;
}node;

node* head=NULL;
node* tail=NULL;

void push_front(int a)
{
    node *newnode = malloc(sizeof(node));
    newnode->data=a;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
}

void push_back(int a)
{
    node *newnode = malloc(sizeof(node));
    newnode->data=a;
    newnode->next=NULL;
    newnode->prev=NULL;

    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }
}
int pop_front()
{
    int tmp;
    if(head==NULL)
    {
        return -1;
    }
    else if(head->next==NULL)
    {
        tmp=head->data;
        free(head);
        head=NULL;
        tail=NULL;
    }
    else{
        node* tmpnode=head;
        tmp=head->data;
        head->next->prev=NULL;
        head=head->next;
        free(tmpnode);
    }
    return tmp;
}
int pop_back()
{
    int tmp;
    if(tail==NULL)
    {
        return -1;
    }
    else if(tail->prev==NULL)
    {
        tmp=tail->data;
        free(tail);
        head=NULL;
        tail=NULL;
    }
    else
    {
        node *tmpnode=tail;
        tmp=tail->data;
        tail->prev->next=NULL;
        tail=tail->prev;
        free(tmpnode);
    }
    return tmp;
}
int size()
{
    int cnt=0;
    if(head==NULL)
    {
        return cnt;
    }
    for(node *curr=head;curr!=NULL;curr=curr->next)
    {
        cnt++;
    }
    return cnt;
}
int empty(){
    if(head==NULL)
        return 1;
    return 0;
}
void clear()
{
    node *curr=head;
    while(curr!=NULL)
    {
        node *tmpnode=curr;
        curr=curr->next;
        free(tmpnode);
    }
    head=NULL;
    tail=NULL;
}
int front()
{
    if(head==NULL)
    {
        return -1;
    }
    return head->data;
}
int back(){
    if(tail==NULL)
    {
        return -1;
    }
    return tail->data;
}


int main() {
    scanf("%d", &n);
    int x;
    for (int i = 0; i < n; i++) {
        scanf("%s", command);
        if (strcmp(command, "push_front") == 0 || strcmp(command, "push_back") == 0) {
            scanf("%d", &x);
        }
        if (strcmp(command, "push_front") == 0)
            push_front(x);
        else if (strcmp(command, "push_back") == 0)
            push_back(x);
        else if (strcmp(command, "pop_front") == 0)
            printf("%d\n",pop_front());
        else if (strcmp(command, "pop_back") == 0)
            printf("%d\n",pop_back());
        else if (strcmp(command,"size")==0)
            printf("%d\n",size());
        else if (strcmp(command, "empty") == 0)
            printf("%d\n",empty());
        else if (strcmp(command, "front") == 0)
            printf("%d\n",front());
        else if (strcmp(command, "back") == 0)
            printf("%d\n",back());
    }
    // Please write your code here.
   
    return 0;
}