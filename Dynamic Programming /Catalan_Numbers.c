//nth catalan number

#include<stdio.h>
#include<stdlib.h>

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	// Annual October wala PR which has absolute Zero impact. 
}

void main()
{
	int n,i;
	double cat=1;
	printf("Input n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cat=(cat*(double)(i+n))/i;
	}
	cat=cat/(n+1);
	printf("%dth Catalan Number is:%.0f",n,cat);
}
