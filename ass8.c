#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10];
	int i,min1,min2;
	scanf("%d",&a[0]);
	min1=a[0];
	for(i=1;i<10;i++)
	{  
	scanf("%d",&a[i]);
		if(min1>a[i])
		min1=a[i];
	}
	min2=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]==min1)
		continue;
		else if(min2>a[i])
		{
			min2=a[i];
		}
	}
	printf("Second smallest element is %d\n",min2);
	getch();
	return 0;
}
