#include <stdio.h>
#include <stdio.h>
int main()
{
	int i,a[10],result,key,j;
	for(i=0;i<10;i++)
	{
		result=rand()%1000;
		a[i]=result;
	}
	printf("Before sort:\n");
	for(i=1;i<10;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	for(i=1;i<10;i++)
	{
		key=a[i];
		j=i-1;
		while(key<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;
			}
			a[j+1]=key;
			}
			printf("After sort:\n");
			for(i=0;i<10;i++)
			{
				printf("%d ",a[i]);
				}
				return 0;
				}
