#include<stdio.h>
int main(){
	int num,n,i;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("Enter position\n");
	scanf("%d",&n);
	i=(1<<n);
	num=num|i;
	printf("The number is %d\n",num);
	return 0;
}
