#include<stdio.h>
int main()
{
	int fac(int n);
	int n;
	int y;
	printf("input an integer number:");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++) y+=fac(i);
	printf("1!到%d！的和为：%d",n,y);
	return 0;
}

int fac(int n)
{
	int f;
	if(n<0) 
		printf("data error!");
	else if(n==0||n==1)
		f=1;
	else
		f=fac(n-1)*n;
	return(f);
}
