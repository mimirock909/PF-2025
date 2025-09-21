/*2. Temperature Checker (Simple If)
   Take input temperature. If greater 
   than 30 print “Weather is Hot”*/
#include<stdio.h>
 int main(void){
 
 
    int temp ;
	printf("\nenter temperature (in celcius) =");
	scanf("%d",&temp);
	if (temp>=30){
		printf("whether is hot");
	}
	else{
		printf("whether is normal\n");
	}
		return 0;
	}
