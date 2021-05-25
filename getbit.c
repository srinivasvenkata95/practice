#include<stdio.h>
int main(){
	int num,n,i;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("Enter position\n");
	scanf("%d",&n);
	i=(1<<n);
	num=num&i;
	if(num)
		printf("The num is 1\n");
	else
		printf("The num is 0\n");
	return 0;
}
