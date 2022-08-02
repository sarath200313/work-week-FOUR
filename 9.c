#include <stdio.h>
int main()
{
	int n;
	printf("enetr size of array:");
	scanf("%d",&n);
	int arr[n];
	int i,num,flag=0;
	printf("search:");
	scanf("%d",&num);
	for(i=0;i<n;i++
	{
		printf("enter %d element:",i);
		scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++)
		{
			if(arr[i]==num)
			flag=1;
			}
			if(flag!=0)
			printf("\nyes,%d is in the array",num);
			else
			printf("%d is not in the array",num);
			return 0;
			}
