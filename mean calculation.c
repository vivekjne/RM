#include <stdio.h>
#include <math.h>
int main(void) {
	int n,a[20],mean,sum=0,i;
	printf("Enter no of values for which mean needs to be calculated\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value %d:\t",i+1);
		scanf("%d",&a[i]);
		sum = sum+a[i];
	}

	mean = sum/n;
	printf("the mean of the values are %d ",mean);
	return 0;
}
