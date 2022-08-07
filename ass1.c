#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10];
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("Sum is %d\n",sum);
	getch();
	return 0;
}
