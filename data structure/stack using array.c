#include <stdio.h>
#define SIZE 10
void push(int a[],int *top)
{
 int e;
 if(*top>=SIZE-1)
 printf("stack OVERFLOW");
 else
 {
 printf("\n enter number:");    
 scanf("%d",&e);
 *top=*top+1;
 a[*top]=e;
 printf("\n the entered element %d is pushed into the stack\n",e);
 }
}
void pop(int a[],int *top)
{   int e;
    if(*top==-1)
    printf("stack underflow");
    else
    {
        e=a[*top];
        printf("\nthe element %d popped from stack",e);
        *top=*top-1;
    }

}
void display(int a[],int *top)
{
    int i;
    printf("\nthe stack elements are:");
    for(i=*top;i>=0;i--)
    printf("%d",a[i]);
    
}

int main()
{
    int arr[SIZE], top=-1;
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
            case 1:push(arr,&top);
                   break;
            case 2:pop(arr,&top);
                   break;
            case 3:display(arr,&top);
                   break;
            case 4:e=0;
                   printf("\nexiting from the program\n");
                   break;
            default:printf("\nplease enter valid choice\n");
            
        }
        
    }
    return 0;
    
}
        