#include<stdio.h>
void binaryofnum(int);
int main(){
        int num,n=0,i,mask,even=0,odd=0;
        printf("Enter number\n");
        scanf("%d",&num);
        binaryofnum(num);
        for(i=0;i<32;i+=8)
	{
		mask=15<<i;
		odd=odd|mask;
	}
	even=~odd;
	n=((even&num)>>4)|((odd&num)<<4);
	printf("The number after swap is %d\n",n);
	binaryofnum(n);
        return 0;
}

void binaryofnum(int num){
        for(int i=31;i>=0;i--){
                printf("%d",(num&(1<<i))?1:0);
        }
        printf("\n");
}

