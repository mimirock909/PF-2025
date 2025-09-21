#include<stdio.h>

int main(void){
	int num1=15 , num2=4;
	printf("Addition: num1=%d num2=%d :%d",num1 , num2, num1+num2);
	printf("\nsubraction: num1=%d num2=%d : %d",num1,num2, num1-num2);
	printf("\nmultiplication: num1=%d num2=%d : %d",num1,num2, num1*num2);
	printf("\ndivision: num1=%d num2=%d : %f",num1,num2, (float)num1/num2);
	printf("\nremainder: num1=%d num2=%d : %d",num1,num2, num1%num2);
	float cel;
	printf("\nenter temperature in celcius =\n");
	scanf("%f",&cel);
	float feren=cel*9/5+32;
	printf("temperature in farenheit = %f",feren);
	char israining[3] ;
	printf("\nis it raining (yes/no) =");
	scanf("%s",&israining);
    if (israining=="yes"){
    	printf("take an umbrella");
	}
	else{
		printf("weather is good to go !");
	}
  
	int num;
	printf("\nenter number\n");
	scanf("%d",&num);
	if(num>=0){
		printf("number is positive!");
	}
	else{
		printf("number is negative!");
	}
	int temp ;
	printf("\nenter temperature (in celcius) =");
	scanf("%d",&temp);
	if (temp>=30){
		printf("whether is hot");
	}
	else{
		printf("whether is normal\n");
		int age;
		printf("enter your age =\n");
		scanf("%d",&age)
		if(age>0 && age<18){
			printf("you can not vote!\n");
			else if(age<=100 && age>=18){
				printf("you can vote!\n");
			}
			else {
				printf("enter valid age.\n");
			}
			int number;
			printf("enter a number=\n")
		}
		
		
		
		
		
		
		
		
		
		
	}
	return 0;
}
