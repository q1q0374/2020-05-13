#include<stdio.h>
int main()
{
	char str[90];
	int i;
	
	printf("문자열 입력");
	scanf("%s",str);
	
	for(i=strlen(str);i>=0;i--)
	{
		putchar(str[i]);
	}

}
