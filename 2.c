#include <stdio.h>
#define n 10
int main()
{
	int p[10];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		}
		int max=p[0];
		for (int j=0;j<n;j++)
		{
			if(p[j]>max)
			max=p[j];
		}
				printf("%d",max);
				return 0;
}
