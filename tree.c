#include<stdio.h>
#include<stdlib.h>
struct node * createnode(void);
void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);
struct node{
	int data;
	struct node *left,*right;
};
int main(void){
	struct node *root=NULL;
	root=createnode();
	printf("preorder:");
	preorder(root);
	printf("\n");
	printf("inorder:");
	inorder(root);
	printf("\n");
	printf("postorder:");
	postorder(root);
	printf("\n");
	return 0;
}

struct node * createnode(){
	int x;
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter data : enter -1 for no node\n");
	scanf("%d",&x);
	if(x==-1)
		return NULL;
	temp->data=x;
	printf("enter left child of %d \n",x);
	temp->left=createnode();
	printf("enter right child of %d \n",x);
	temp->right=createnode();
	return temp;
}

void preorder(struct node * root){
	if(root==NULL)
		return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node * root){
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}
void inorder(struct node * root){
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);

}
