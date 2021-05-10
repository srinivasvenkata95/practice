#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *link;}*front=NULL,*rear=NULL;
void enqueue(int item);
int dequeue();
int peek();
void display();
int main(){
int choice,item;
while(1){
printf("1.Enqueue 2.Dequeue 3.Display 4.peek 5.exit\n");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter element\n");
scanf("%d",&item);
enqueue(item);
break;
case 2:
printf("deleted element is %d\n",dequeue());
break;
case 3:
display();
break;
case 4:
printf("element at front is %d\n",peek());
break;
case 5:
exit(1);
default:
printf("Enter correct choice\n");}}
return 0;}
void enqueue(int item){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->info=item;
temp->link=NULL;
if(front==NULL)
front=temp;
else
rear->link=temp;
rear=temp;}
int dequeue(){
struct node *temp;
int item;
if(front==NULL){
printf("Queue is underflow\n");
return;}
temp=front;
item=temp->info;
front=front->link;
free(temp);
return item;}
int peek(){
if(front==NULL){
printf("Queue is underflow\n");}
return front->info;}
void display(){
struct node *ptr;
ptr=front;
if(front==NULL){
printf("Queue is empty\n");}
printf("Queue elements is:\n");
while(ptr!=NULL){
printf("%d",ptr->info);
ptr=ptr->link;}
}
