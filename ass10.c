#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i;
	int b[10];
	for(i=0;i<10;i++)
  {
  	scanf("%d",&a[i]);
  	b[i]=a[i];
  }
  for(i=0;i<10;i++)
  {
  	printf("%d ",b[i]);
  }
  getch();
  return 0;
}
