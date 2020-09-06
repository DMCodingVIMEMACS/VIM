#include <stdio.h>
//#include "parentclass.h"
#include "childclass.h"
int main(int argc,char** argv)
{
	parentclass p;
	childclass c;
	printf("Printf Parent Result =%d\n",p.Result());
	printf("Printf Child  Result =%d\n",c.Result());
	return 0;
}

