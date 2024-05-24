#include<stdio.h>
main(){
	int size;
	int *ptr;
	int arr[size];
	
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	int i;
	
	for(i=0;i<=size;i++){
		printf("Enter elements of arr [%d]: ",i);
		scanf("%d",&arr[i]);
	}
		for(i=0;i<=size;i++){
		arr[i]*3;
		printf("here is cube of array elements: \n",arr[1]);
	}
}
