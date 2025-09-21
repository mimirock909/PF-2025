#include<stdio.h>
int main(){
 int num1;
 int num2;
 printf("enter number 1 : ");
 scanf("%d",&num1);
 printf("enter number 2 : ");
 scanf("%d",&num2);
 num1>num2?
  	    printf("%d > %d",num1,num2):
  	    	printf("%d > %d",num2,num1); 
return 0;
}
