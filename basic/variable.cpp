#include <stdio.h>
int main(int argc,char** argv)
{
	int i=10;
	float f = 10.1;
	double d = 10.1;
	char string[250] = "Hello C\0";
	printf("Print Integer %d\n",i);
	printf("Print float %f\n",f);
	printf("Print double %lf\n",f);
	printf("String Zero %s\n",string);
	printf("Print 3 digit integer %3d\n",i);
	printf("Print 3.3 digit float %3.3f\n",f);
	printf("Print 3.3 digit double %3.3lf\n",d);
	printf("Print double %e\n",f);
	return 0;
}

