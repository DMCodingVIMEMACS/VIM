#include <stdio.h>
struct A
{
	int b;
	char c;
	double d;
	float f;
	long l;
};
struct B
{
	int b;
	char c;
	double d;
	float f;
	long l;
};
int main(int argc, char** argv)
{
	struct A a;
	struct B b;
	printf("struct data size = %lu\n",sizeof(struct A));
	printf("struct data size = %lu\n",sizeof(struct B));
	unsigned long ulSize = sizeof(int) + sizeof(char) + sizeof(double) + sizeof(float) + sizeof(long);
	printf("all Size = %lu\n",ulSize);
	return 0;
}

