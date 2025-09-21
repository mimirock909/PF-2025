#include<stdio.h>
int main(){
	int age ;
	int weight ;
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your weight: ");
	scanf("%d",&weight);
	if (age>=18){
		if(weight>=50){
			printf("you can donate blood !");
		}
		else{
			printf("you are too underweight.");
		}
	}
	else{
		printf("you are underage.");
	}
	return 0;
}
