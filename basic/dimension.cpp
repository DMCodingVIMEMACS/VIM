#include <stdio.h>
int main(int argc,char** argv)
{
	const int iDimSize = 10;

	//int dim1d[10];
	int dim1d[iDimSize];
	//int dim2d[10][10];
	int dim2d[iDimSize][iDimSize];
	//int dim3d[10][10][10];
	int dim3d[10][10][10];
	for(int i=0;i<iDimSize;i++)
	{
		dim1d[i] =i;
		for(int j=0;j<iDimSize;j++)
		{	
			dim2d[i][j]= iDimSize*i +j;
			for(int k=0;k<iDimSize;k++)
			{
				dim3d[i][j][k] = (iDimSize*iDimSize)*i + iDimSize*j +k;

			}
		}

	}
	//Print 1D 

	//Print 2D
	//Print 3D
	for(int i=0;i<iDimSize;i++)
	{
		for(int j=0;j<iDimSize;j++)
		{	
			for(int k=0;k<iDimSize;k++)
			{
				
				printf("Print dim3d[%d][%d][%d] =%d\n",i,j,k,dim3d[i][j][k]);
			}
		}

	}
	return 0;
} 
