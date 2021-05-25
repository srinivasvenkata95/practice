#include<stdio.h>
void binaryofnum(int);
int main(){
        int num,n=0,i,mask;
        printf("Enter number\n");
        scanf("%d",&num);
        binaryofnum(num);
        for(i=31;i>=0;i--){
                mask=1<<i;
                if(num&mask)
                        break;
                n++;}
        printf("the trailing zeroes are %d",n);
        return 0;
}

void binaryofnum(int num){
        for(int i=31;i>=0;i--){
                printf("%d",(num&(1<<i))?1:0);
        }
        printf("\n");
}

