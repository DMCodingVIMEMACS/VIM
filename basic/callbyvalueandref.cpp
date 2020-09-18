#include <stdio.h>
void callbyvalue(int a,int b,int c);
void callbyref(int a,int b,int* c);
int main(int argc,char** argv)
{
	int a=10;
	int b=-20;
	int* pa=&a;
	int* pb=&b;
	int c = 0;
	callbyvalue(a,b,c);
	printf("Print plus value a=%d, b=%d,c=%d\n",a,b,c);
	c=0;
	callbyref(a,b,&c);
	printf("Print plus refence a=%d, b=%d, c=%d\n",a,b,c);
	return 0;
}
void callbyvalue(int a,int b,int c)
{
	c= a+b;
	a=30;
	b=40;
}
void callbyref(int a,int b, int* c)
{
	*c = a + b;
}

