#include<stdio.h>
main(){
	int amount;
	char author[30];
	char name[30];
	int price;
	
	printf("Enter amount of data want to store: ");
	scanf("%d",&amount);
	printf("\n\n");
	int i;
	
	for(i=1;i<=amount;i++){
		printf("Enter name of book[%d]: ",i);
		scanf("%s",&name);
		printf("\n\n");
		printf("Enter name of author[%d]: ",i);
		scanf("%s",&author);
		printf("\n\n");
		printf("Enter price of book[%d]: ",i);
		scanf("%d",&price);
		printf("\n\n");
	}
	printf("here is the details. you were entered...\n");
	for(i=0;i<=amount;i++){
		printf("name= %s",name);
		printf("\n\n");
		printf("name= %s",author);
		printf("\n\n");
		printf("name= %d",price);
		printf("\n\n");
	}
}
