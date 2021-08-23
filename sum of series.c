#include<stdio.h>
void main()

{
	int i,n;
	float sum=0.0,a;
	printf("\n enter no of terms in series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=1/(float)i;
		sum=sum+a;
	}
	printf("%f",sum);
}
