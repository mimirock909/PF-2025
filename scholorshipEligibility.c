#include<stdio.h>
int main (){
	int marks, attendance , extracuriculars;
	printf("\nenter marks =");
	scanf("%d",&marks);
	printf("\nenter attendance percentage");
	scanf("%d",&attendance);
	printf("\nhave you participated in extra curiculars (1 for yes / 0 for no)=");
	scanf("%d",&extracuriculars);
	if(marks>=60){
		if(attendance>=75){
			if(extracuriculars==1){
			    printf("\nyou are elligible for the scholrship!");	
			}
			else{
				printf("\nyou do not have any extra curiculars.\napplication rejected!!");
			}	 
		}
		else{
		 printf("\nyou attendance isnt upto the par!\napplication rejected!!");	
		}
	}
	else {
		printf("your marks are below the requirements\napplication rejected!!");
	}
	return 0;
}
