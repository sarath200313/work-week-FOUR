#include <stdio.h>
int main()
{
	int n;
	printf("enetr size of array:");
	scanf("%d",&n);
	int arr[n];
	int i,num;
	printf("search:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		printf("enter %d element:",i);
		scanf("%d",&arr[i]);
		}
		int first=0,last,mid,flag=0;
		last=n-1;
		while(first<=last)
		{
			mid=(first+last)/2;
			if(num<arr[mid])
			{
				last=mid-1;
				mid=(first+last)/2;
				}
				else if(num>arr[mid]){
					first=mid+1;
					mid=(first+last)/2;
					}
					else if(num==arr[mid]){
						flag=1;
						printf("position of %d in the array is %d",num,mid);
						break;
						}
						}
						if(flag==0)
						printf("%d is not in the array",num);
						return 0;
						}
