#include<stdio.h>
struct stu
{
	int a:1;
	int b:1;
	char c:1;
}s;

int main()
{
	printf("%d\n",sizeof(s));
}




