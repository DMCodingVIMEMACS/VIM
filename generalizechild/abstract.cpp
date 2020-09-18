#include <stdio.h>
//#include "abstractparent.h"
//abstractparent.h is included in this file 
#include "generalizechild.h"
int main(int argc,char** argv)
{
	generalizechild gc;
	abstractparent* pap;
	pap = &gc;
	printf("Print abstract Function Result is %d\n",
	pap->Result());
	return 0;
}

