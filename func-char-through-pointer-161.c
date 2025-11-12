#include<stdio.h>
/*Write a function that takes a char* (pointer to
    char) and prints the character it points to.*/
void printchar(char *a);
int main(){
	char a;
	scanf("%c",&a);
	printchar(&a);
	
	return 0;
}
void printchar(char *a){
	printf("%c",*a);
}
