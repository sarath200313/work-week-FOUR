#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}
		int large=a[0],small=a[1],l=0,s=0;
		for (int i=0;i<n;i++)
		{
			if(a[i]>large)
			{
				large=a[i];
				l=i;
				}
				}
				for(int j=0;j<n;j++)
				{
					if(a[j]<small)
					{
						small=a[j]; s=j;
						}
						}
						for (int k=0;k<n;k++)
						{
							printf("%d\t",a[k]);
							}
							printf("\n");
							a[l]=small;
							a[s]=large;
							for(int i=0;i<n;i++)
							{
								printf("%d\t",a[i]);
								}
								printf("\n");
								printf("%d\n",large);
								printf("%d\n",small);
								printf("%d %d",l,s);
								return 0;
								}
