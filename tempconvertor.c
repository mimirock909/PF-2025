#include<stdio.h>

int main(void){
	// basic calculator
	int num1=15 , num2=4;
	 printf("Addition: num1=%d num2=%d :%d",num1 , num2, num1+num2);//adition of two numbers
	printf("\nsubraction: num1=%d num2=%d : %d",num1,num2, num1-num2);//subraction of two numbers
	printf("\nmultiplication: num1=%d num2=%d : %d",num1,num2, num1*num2);//multiplication of two numbers
	printf("\ndivision: num1=%d num2=%d : %f",num1,num2, (float)num1/num2);// division of two numbers
	printf("\nremainder: num1=%d num2=%d : %d",num1,num2, num1%num2);// remainder left when the two numbers are divided
	// temp convertor
	float cel;
	printf("\nenter temperature in celcius =\n");
	scanf("%f",&cel);//input celcius value from the user
	float feren=cel*9/5+32;//formula
	printf("temperature in farenheit = %f",feren);
	//rain check 
	char israining[3] ;
	printf("\nis it raining (yes/no) =");
	scanf("%s",&israining);
    if (israining=="yes"){
    	printf("take an umbrella");
	}
	else{
		printf("weather is good to go !");
	}
  // even odd number checker
	int num;
	printf("\nenter number\n");
	scanf("%d",&num);
	if(num>=0){
		printf("number is positive!");
	}
	else{
		printf("number is negative!");
	}
	// weather checker
	int temp ;
	printf("\nenter temperature (in celcius) =");
	scanf("%d",&temp);
	if (temp>=30){
		printf("whether is hot");
	}
	else{
		printf("whether is normal\n");
		// voting requisuite
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

