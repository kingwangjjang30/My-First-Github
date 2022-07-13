#include<stdio.h>
int main()
{
	//30 10
	int i,n,sum=0;
	printf("큰 수 입력 : ");
	scanf("%d",&i);
	int	large=i;
	
	printf("작은 수 입력 : ");
	scanf("%d",&n);
	
	while(i>=n)
	{
		sum=sum+i;		//sum+=i;
		i--;
	}
	printf("%d부터 %d까지의 합은 %d입니다\n",large,n,sum);
}
