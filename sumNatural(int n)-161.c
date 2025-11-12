#include<stdio.h>
/* Write a recursive function sumNatural(int n)
    that returns the sum of the first n natural
    numbers: 1 + 2 + 3 + ... + n
    Include a proper base case. In main(), test 
    it with n = 5 (expected output: 15).*/
int sumNatural(int n);
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("sum of natural number till %d  is : %d",n,sumNatural(n));
	
	return 0;
}
int sumNatural(int n){
	if (n==0){
	return 0;
	}
	int sum =n+sumNatural(n-1);
	return sum ;
}
