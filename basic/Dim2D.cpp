#include <stdio.h>
int main(int argc,char** argv)
{
	//DimSize is must be constant
	const int iDimSize =10;
	int iDim2D[iDimSize][iDimSize];
	for(int i=0;i<iDimSize;i++)
	{
		for(int j=0;j<iDimSize;j++)
		{
			iDim2D[i][j] = i*iDimSize + j;
		}
	}
	for(int i=0;i<iDimSize;i++)
	{
		for(int j=0;j<iDimSize;j++)
		{
			printf("Print iDim2D[%d][%d]=%d\n",i,j,iDim2D[i][j]);
		}
	}
	return 0;
}
