#include <stdio.h>
#include <math.h>
int main(void) {
	int n,a[20],i;
	printf("Enter no of values for which median needs to be calculated\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value %d:\t",i+1);
		scanf("%d",&a[i]);
		
	}
	if(n%2==0)
	{
		
		printf("median of the values are: %d & %d",a[n/2-1],a[n/2]);
	}
	else
	{
		printf("Median of the values are: %d",a[n/2]);
	}

	return 0;
}
