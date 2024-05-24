#include<stdio.h>
void main(){
	int a,b,c,value;
	
	printf("Enter 1 for add: \n");
	printf("Enter 2 for sub: \n");
	printf("Enter 3 for mul: \n");
	printf("Enter 4 for div: \n");
	printf("enter 0 for exit: \n");
	scanf("%d",&value);
	
	
	printf("Enter value of A: ");
	scanf("%d",&a);
	printf("Enter value of B: ");
	scanf("%d",&b);
	if(value != 0){
		if(value==1){
		c=a+b;
		printf("here is the add.. of %d",c);
		}
		if(value==2){
			c=a-b;
		printf("here is the add.. of: %d",c);
		}
		if(value==3){
			c=a*b;
		printf("here is the mul.. of: %d",c);
		}
		if(value==4){
			c=a/b;
		printf("here is the div.. of: %d",c);
		}
		else{
			printf("put valid numbers in 1 to 4");
		}
	}
}
