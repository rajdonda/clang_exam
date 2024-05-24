#include<stdio.h>
void main(){
	int size;
	
	printf("Enter size of array:");
	scanf("%d",&size);
	
	int arr[size];
	
	int i;
	
	for(i=0;i<size;i++){
		printf("Enter elements of array:\n");
		scanf("%d",&arr[i]);
	}
	int a[size];
	int sum[size];
	arr[i]=a[i];
	sum[i]=arr[i]+a[i];
	for(i=0;i<size;i++){
		printf("Enter elements of array: %d",sum[i]);
	}
}
