#include<stdio.h>
main(){
	int arr[5]={3,5,4,1,7};
	int i;
	for(i=5;i>0;i--){
		printf("%d",arr[i]);
	}
	int sum;
	sum=arr[1]+arr[2]+arr[3]+arr[4]+arr[5];
	printf("%d",sum);
}
