#include<stdio.h>
#include<conio.h>
int main()
{
	int x= 14;
	int y=60;
	while(((y-x)%3)!=0){
		printf("%d\n",y);
		y=y-5;
	}
	printf("y=%d",y);
	return(0); 
}
