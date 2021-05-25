#include<stdio.h>
void binaryofnum(int);
int main(){
	int num,n,i;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("number before flip is \t");
	binaryofnum(num);
	for(i=31;i>=0;i--){
		num=(num^(1<<i));}
	printf("The number is %d\n",num);
	binaryofnum(num);
	return 0;
}

void binaryofnum(int num){
	for(int i=31;i>=0;i--){
		printf("%d",(num&(1<<i))?1:0);
	}
	printf("\n");
}
