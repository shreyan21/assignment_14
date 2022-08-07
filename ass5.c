#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10];
	int i,min;
	scanf("%d",&a[0]);
	min=a[i];
	for(i=1;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(min>a[i])
		min=a[i];
		
	}
	printf("Lowest number is %d\n",min);
	getch();
	return 0;
}
