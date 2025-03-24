#include<stdio.h>
int main()
{
	//30~10������ ¦�� 
	int num =30;
	while(num>=10)
	{
		printf("%d ",num);
		num-=2;
	}
	
	//1~10������ ��
	int i=1,sum;
	while(i<=100)
	{
		sum=sum+i;
		i++;
	}
	printf("\n1~10������ �� : %d",sum); 
}

void newfunc()
{
	printf("hello,hi");
}

void newfunc2()
{
	printf("i love clang");
}