#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		a[i]=rand()%100;
		}
		int m=a[0];
		for(int j=0;j<10;j++)
		{
			if(a[j]>m){ m=a[j];
				}
				}
				for(int k=0;k<10;k++)
				{
					printf("%d ",a[k]);
					}
					printf("\n%d",m);
					return 0;
					1}
