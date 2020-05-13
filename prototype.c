#include<stdio.h>
int main()
{
	int out1,out2;
	int a,b;
	
	out1=printf("hello world");
	printf("%d\n",out1);

	out2 = scanf("%d %d",&a,&b);
	printf("scanf data %d\n\n",out2);
	
	
	printf("%d %d",a,b);
	return 0;
	
	
}
