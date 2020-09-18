#include <stdio.h>
int main(int argc,char** argv)
{
	//2 x 2 =4 3 x 2 =3 4 x 2 = 4
	for(int k=0;k<5;k++)
	{
		for(int i=2;i<=9;i++)
		{
			for(int j=2;j<=5;j++)
			{
				int jo=(j+k*4);
				if(jo>19)
				{
					break;
				}
				printf("%d x %d = %d\t",jo,i,i*jo);
			}
			printf("\n");	
		}
		printf("\n");

	}
	return 0;
}
