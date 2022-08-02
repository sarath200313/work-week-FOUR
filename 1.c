#include <stdio.h>
int main()
{
	int a[10];
	for (int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		}
		int large=a[0];
		for (int i=0;i<10;i++)
		{
			if(a[i]>large)
			{
				large=a[i];
				}
				}
				printf("%d",large);
				return 0;
				}
