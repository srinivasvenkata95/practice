#include<stdio.h>
void mergesort(int *,int ,int);
int merge(int *,int ,int,int );
int main(void){
	int i, n, num[25];
	printf("Enter  elements of maximum 25");
	scanf("%d",&n);
	printf("Enter %d elements: ", n);
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	mergesort(num,0,n-1);
	printf("The Sorted Order is: ");
	for(i=0;i<n;i++)
	printf(" %d",num[i]);
	return 0;
}
void mergesort(int *a,int lb,int ub){
	if(lb<ub){
		int mid;
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
int merge(int *a,int lb,int mid,int ub){
	int b[25];
	int i,j,k;
	i=lb;
	j=mid+1;
	k=lb;
	while(i<=mid && j<=ub){
		if(a[i]<=a[j]){
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid){
		while(j<=ub){
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else{
		while(i<=mid){
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(int k=lb;k<ub;k++){
		a[k]=b[k];
		}
}
