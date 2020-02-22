#include "stdio.h"

void main(void)
{
	char s[] = "13579";
	char *p = s;	//pointer p指向s串的第一個位址

	printf("%c",*p);	//*p為取值
	printf("%c",*p++);	//取值後指標往下一位(此時取值應為2)
	printf("%c",*(p++));	//效果同*p++
	printf("%c",(*p)++);	//取值後，值+1(會顯示+1之前的數值)
	printf("%c",*p);		
	printf("%c",*++p);	//先是指標往後一位，再取其值(效果同*(++p))
	printf("%c",++*p);	//先值+1，再往後移一位(同++(*p))

	printf("\n");

	printf(s);	//顯示被改過的s
	
}
