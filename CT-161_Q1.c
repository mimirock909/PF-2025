/*1. Temperature Converter
   Take input in Celsius, convert it to Fahrenheit 
   using the formula F = C * 9/5 + 32 and print the result.
   Interactive Challenge:
    Try inputs 100, 0 and -40. Write your observations as comments in the code.*/
    #include<stdio.h>
    int main(void){
    		float cel;
	printf("\nenter temperature in celcius =\n");
	scanf("%f",&cel);
	float feren=cel*9/5+32;
/*enter temperature in celcius =
0
temperature in farenheit = 32.000000*/
	printf("temperature in farenheit = %f",feren);
/*enter temperature in celcius =
100
temperature in farenheit = 212.000000*/
/*enter temperature in celcius =
-40
temperature in farenheit = -40.000000*/
	return 0;
	}
