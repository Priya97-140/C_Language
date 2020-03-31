#include<stdio.h>
#include<conio.h>
int main(){
	char input;
	printf("Hello World!!!\n");
	printf("Are you able to upload your code to GitHub:(y/n or Y/N)");
	scanf("%c",&input);
	if(input=='y'||(input=='Y')){
		printf("Hello to Git Developers");
	}
	else{
		if(input=='n'||(input=='N')){
			printf("Oops!! Error in committing to GitHub");
		}
		else{
			printf("Invalid input");	
		}		
	}
	return 0;
}
