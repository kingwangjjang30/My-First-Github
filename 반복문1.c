#include<stdio.h>
int main()
{
	//30~10까지의 짝수 
	int num =30;
	while(num>=10)
	{
		printf("%d ",num);
		num-=2;
	}
	
	//1~10까지의 합
	int i=1,sum;
	while(i<=10)
	{
		sum=sum+i;
		i++;
	}
	printf("\n1~10까지의 합 : %d",sum); 
}
