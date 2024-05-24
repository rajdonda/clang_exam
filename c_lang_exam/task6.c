#include<stdio.h>
main(){
	char employeesname[30];
	char role[30];
	int i;
	FILE *fp;
	fp=fopen("data.txt","a");
	if(fp!=NULL){
	printf("Enter name of employees: ");
	scanf("%s",&employeesname);
	printf("\n\n");
	printf("Enter name of role: ");
	scanf("%s",&role);
	}
}
