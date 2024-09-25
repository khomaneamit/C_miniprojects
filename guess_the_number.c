#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int r,number,count=0;
	srand(time(NULL));
	r=rand()%100;
	do{
		printf("Enter a number : ");
		scanf("%d",&number);
		if(number<r)
			printf("Higher number please\n");
		else if(number>r)
			printf("Lower number please\n");
		count++;
	}while(number!=r);
	printf("You guess correct number \n No. of guesses : %d",count);
	return 0;
}