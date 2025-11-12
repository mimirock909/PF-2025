#include<stdio.h>
/*Declare an integer, float, and char. 
    Create pointers to each and print their values
    using dereferencing.*/

int main(){
	int num=4;
	char star='*';
	float gpa = 4.0;
	int *ptrin=&num;
	 char *ptrchar=&star ;
	 float *ptrfloat=&gpa ;
	 printf("%d\n",*ptrin);
	 printf("%c\n",*ptrchar);
	 printf("%f\n",*ptrfloat);
	return 0;
}

