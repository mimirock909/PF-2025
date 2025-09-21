#include<stdio.h>
int main(){
	  int score=0;
	  char stat;
	  printf("enter game status (w=win/l=lose)= ");
	  scanf("%c",&stat);
	  if (stat=='w'){
	  	score++;
	  	printf("score=%d",score);
	  }
	  else if(stat=='l'){
	  	score--;
	  	printf("score=%d",score);
	  	
	  }
	  else{
	  	printf("invalid input!");
	  }
	
	return 0; 
}
