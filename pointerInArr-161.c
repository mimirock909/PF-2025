#include<stdio.h>
/* Given int arr[5] = {1,2,3,4,5};, use a pointer to 
    print all elements without using [].*/

int main(){
	 
	int arr[5] = {1,2,3,4,5};
	int i;
	int *ptr=arr;
	for (i=0;i<5;i++){
		printf("%d\t",*(ptr+i));
	}
	return 0;
}

