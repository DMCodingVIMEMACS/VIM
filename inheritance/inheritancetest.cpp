#include <stdio.h>
#include "child.h"
int main(int argc,char** argv)
{
	child c;
	printf("Print parent testfunction = %d\n",c.testfunction());
	printf("Print child testfunctionchild = %d\n",c.testfunctionchild());
	return 0;
}
