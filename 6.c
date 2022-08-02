#include <stdio.h>
int main()
{
	int s;
	scanf("%d",&s);
	int a[s],i,j;
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d ",j);
				break;
			}
		}
	}
	return 0;
}
