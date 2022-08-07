#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10];
	int i,sum1=0,sum2=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2)
		sum2+=a[i];
		else
		sum1+=a[i];
	}
	printf("Sum of even numbers is %d and sum of odd numbers is %d\n",sum1,sum2);
	getch();
	return 0;
}
