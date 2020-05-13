#include<stdio.h>
int main()
{
	char s[]="swimming";
	char t[5]="¾ß±¸";

    printf("s : %s ]n",s);
	printf("s[2]:%c\n",s[2]);
	printf("t: %s\n",t);
	printf("t[2]:%c %c\n",t[2],t[5]);
	
	
	return 0;
}
