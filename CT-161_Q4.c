/*4. Division Safety Checker
   Take input numerator and denominator.
    If denominator is 0 print error message, 
	otherwise perform division and print the result.*/
#include<stdio.h>
	 int main(void){
	 	float denominator;
	 	float numerator;
	 	printf("enter numerator =");
	 	scanf("%f",&numerator);
	 	printf("\nenter denominator =");
	 	scanf("%f",&denominator);
	 	if(denominator!=0){
	 		printf("\ndivision = %.3f",numerator/denominator);
		 }
		 else {
		 	printf("\nmaths error!");
		 }
		 return 0;
	 }
