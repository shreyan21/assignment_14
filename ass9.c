#include<stdio.h>
#include<conio.h>
int main()
{
	int n,temp;
	scanf("%d",&n);
	int a[n];
 int i;
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 i=0;
 while(i<n/2)
 {
 	temp=a[i];
 	a[i]=a[n-1-i];
 	a[n-1-i]=temp;
 	i++;
 }
 for(i=0;i<n;i++)
 {
 	printf("%d ",a[i]);
 }
 getch();
 return 0;
 
}
