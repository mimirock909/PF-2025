#include<stdio.h>
int main(){
	 char something;
	 printf("enter something:");
	 scanf("%c",&something);
	 if (something>='A' && something<='Z'){
	 	printf("upper case!!");
	 }
    else if(something>='a' && something<='z') {
    	printf("lower case!!");
	}	
	else if(something>='0' && something<='9'){
		printf("digit!!");
	}	
	else {
		printf("special character");
	}
	
	
	return 0;
}
