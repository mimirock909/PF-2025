#include<stdio.h>
int main(){
	int units;
	int f1;
	printf("enter units:");
	scanf("%d",&units);
	if (units>100 && units<200){
	   f1=100*5+(units-100)*7;
	}
    else if(units>200){
	    f1=100*5+100*7+(units-200)*10;
	}
	else{
	    f1=units*5;
	}
	printf("price is :%d",&f1);
	
	return 0;
}
