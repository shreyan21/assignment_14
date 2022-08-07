#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10];
	int i,max1,max2;
	scanf("%d",&a[0]);
	max1=a[0];
	for(i=1;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(max1<a[i])
		{
			max1=a[i];
		}
	}
	max2=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]==max1)
		continue;
		else if(max2<a[i])
		max2=a[i];
	}
	printf("Second greatest element is %d\n",max2);
	getch();
	return 0;
	
	
}
