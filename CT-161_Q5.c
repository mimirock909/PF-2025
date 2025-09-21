#include<stdio.h>
    int main(void){
    		float cel;
	printf("\nenter temperature in celcius =\n");
	scanf("%f",&cel);
	float feren=cel*9/5+32;
	printf("temperature in farenheit = %f",feren);
	if(cel>=30){
		printf("\nIt's hot! Stay hydrated and wearlight clothes.");
	}
	else if(cel>=20 && cel<=29){
		printf("\nNice weather! Perfect for outdoor activities.");
	}
	else if(cel>=10 && cel<=19){
		printf("\nCool weather. Wear a light jacket.");
	}
	else if(cel<=0 && cel>=9){
		printf("\nCold! Wear warm clothes.");
	}
	else if(cel<=0){
		printf("\nFreezing! Stay indoors and bundle up.");
	}
	return 0;
	}
	
