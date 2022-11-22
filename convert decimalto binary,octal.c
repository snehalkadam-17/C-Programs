#include<stdio.h>
void convert(int,int);
int main()
{
	int n;
	printf("\n enter a decimal number=");
	scanf("\n binary number =");
	convert(n,2);
	printf("\n");
	printf("\n octal number=");
	convert(n,8);
	printf("\n");
	printf("\n hexadecimal number=");
	convert(n,16);
	printf("\n");
	return 0;
}
void convert(int n,int base)
{
	int reminder=n%base;
	if(n==0)
	return;
	convert(n/base,base);
	if(reminder<10)
	printf("%d",reminder);
	else
	printf("%c",reminder-10+'A');
}
