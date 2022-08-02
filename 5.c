#include <stdio.h>
int main()
{
	int size,i,b,seclar;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	b=a[0];
	for(i=1;i<size;i++)
	{
		if(a[i]>b)
		{
			b=a[i];
		}
	}
	seclar=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>seclar && a[i]<b)
		{
			seclar=a[i];
		}
	}
	printf("%d",seclar);
	return 0;
}
