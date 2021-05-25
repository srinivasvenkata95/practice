#include<stdio.h>
void binaryofnum(int );
int main(){
	int num,i,mask,count=1;
	printf("Enter number\n");
	scanf("%d",&num);
	binaryofnum(num);
	for(i=31;i>=0;i--)
	{
		mask=1<<i;
		if(num&mask)
			count++;
	}
	if(count==1)
		printf("Number is power of 2\n");
	else
		printf("Number is not power of 2\n");
	return 0;
}

void binaryofnum(int num){
	for(int i=31;i>=0;i--){
		printf("%d",(num&(1<<i))?1:0);
	}
	printf("\n");
}
