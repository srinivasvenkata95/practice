#include<stdio.h>
void binaryofnum(int);
int main(){
        int num,i,mask,ones=0,zeroes=0;
        printf("Enter number\n");
        scanf("%d",&num);
        binaryofnum(num);
        for(i=0;i<=31;i++){
                mask=1<<i;
                if(num&mask)
                        ones++;
		else
                zeroes++;}
        printf("the zeroes are %d",zeroes);
	printf("the ones are %d",ones);
	
        return 0;
}

void binaryofnum(int num){
        for(int i=31;i>=0;i--){
                printf("%d",(num&(1<<i))?1:0);
        }
        printf("\n");
}

