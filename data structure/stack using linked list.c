#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
}*top=NULL;

void push()
{
struct node *temp;
int val;
printf("\nEnter the value:");
scanf("%d",&val);
temp=(struct node *)malloc(sizeof(struct node));
temp->data=val;
if(top==NULL)
temp->next=NULL;
else
temp->next=top;
top=temp;
printf("\nOne value inserted into the stack\n");
}

void pop()
{
if(top==NULL)
printf("\nstack underflow");
else
{
struct node *temp=top;
printf("\ndeleted element\n",temp->data);
top=temp->next;
free(temp);
}
}
void display()
{
if(top==NULL)
printf("\nstack is empty");
else
{
struct node *temp=top;
while(temp->next!=NULL)
{
printf("%d--->",temp->data);
temp=temp->next;
}
printf("%d--->",temp->data);
}
}






int main()
{
    int top=NULL;
    int ch,e=1;
    while(e)
    {
        printf("\nSTACK DS OPERATIONS\n");
        printf("------MENU-------------");
        printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:e=0;
                   printf("\nexiting from the program\n");
                   break;
            default:printf("\nplease enter valid choice\n");
            
        }
        
    }
    return 0;
    
}
        