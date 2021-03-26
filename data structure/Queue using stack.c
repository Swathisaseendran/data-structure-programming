#include<stdio.h>
#include<stdlib.h>

void push1(int);
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
void create();

int s1[100],s2[100];
int top1=-1,top2=-1;
int count=0;

int main()
{
int ch,e=1;
printf("\n1.insert element into queue");
printf("\n2.delete from queue");
printf("\n3.display from queue");
printf("\n4.exit");
create();
while(e)
{
printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
switch(ch)
        {
            case 1:enqueue();
                   break;
            case 2:dequeue();
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
void create()
{
top1=top2=-1;
}
void push1(int data)
{
s1[++top1]=data;
}
 
int pop1()
{
    return(st1[top1--]);
}
 
 
void push2(int data)
{
    st2[++top2] = data;
}
 
int pop2()
{
    return(st2[top2--]);
}
 
 
void enqueue()
{
    int data, i;
 
    printf("Enter data into queue");
    scanf("%d", &data);
    push1(data);
    count++;
}
 
 
 
void dequeue() 
{
    int i;
 
    for (i = 0;i <= count;i++)
    {
        push2(pop1());
    }
    pop2();
    count--;
    for (i = 0;i <= count;i++)
    {
        push1(pop2());
    }
}
 
 
void display()
{
    int i;
 
    for (i = 0;i <= top1;i++)
    {
        printf(" %d ", st1[i]);
    }
 
        