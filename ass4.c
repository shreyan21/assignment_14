#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10];
	int i,max;
	scanf("%d",&a[0]);
	max=a[i];
	for(i=1;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])
		max=a[i];
		
	}
	printf("Greatest number is %d\n",max);
	getch();
	return 0;
}
