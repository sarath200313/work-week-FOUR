#include <stdio.h>
int main()
{
	int n=10,p[10];
	float sum=0;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		}
		for (int j=0;j<n;j++)
		{
			sum=sum+p[j];
			}
			printf("%f",sum/n);
			return 0;
			}
