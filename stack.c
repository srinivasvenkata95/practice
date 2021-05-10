#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void push(struct node **,int);
void display(struct node **);
void pop(struct node **);

 int main()
{
    int choice,data;
struct node *top=NULL;
while(1){
  printf("1.push 2.pop 3.display 4.exit\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("enter the data\n");
        scanf("%d",&data);
        push(&top,data);
        break;
        case 2:
        pop(&top);
        break;
	case 3:
	display(&top);
	break;
        case 4:
        exit(0);
        break;
       default:
	printf("Enter correct number\n");
        break;
        
    }}

    return 0;
}
void push(struct node **base,int data)
{
	struct node *temp;
	temp=*base;
	temp= (struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=*base;
	*base=temp;	
	
}
void pop(struct node **base)
{
	struct node *temp;
	temp=*base;
	if(temp==NULL)
	{
		printf("stack underflow\n");	
	}
	else
	{
		*base=temp->next;
		 free(temp);
		 temp=*base;		
	}
}

void display(struct node **base)
{
	struct node *temp;
	temp=*base;
	if(temp==NULL)
	printf("no elements to display\n");
	else
	{ 
		while (temp->next!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
		printf("%d\n",temp->data);		
	}

}
