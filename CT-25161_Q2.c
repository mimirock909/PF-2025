#include<stdio.h>
int main(){
	int s1;
	int s2;
	int s3;
	printf("enter side 1 of the triangle :");
	scanf("%d",&s1);
	printf("\nenter side 2 of the triangle :");
	scanf("%d",&s2);
	printf("\nenter side 3 of the triangle :");
	scanf("%d",&s3);
	if (s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
		if (s1==s2 && s2==s3){
		 printf("equilateral traingle");
	    }
        else if (s1==s2 || s1==s3 || s2==s3){
		 printf("isoceles triangle");
	    }
	    else {
		 printf("scalene triangle");
	    }
	}
	else{
		printf(" not a valid triangle");
	}
	return 0;
}
