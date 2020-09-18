#include <stdio.h>
#include <list>
using namespace std;
int main(int argc,char** argv)
{
	int iDimSize =10;
	list<int> aList;
	for(int i=0;i<iDimSize;i++)
	{
		aList.push_back(i);
	}
	list<int>::iterator itrList = aList.begin();
	for(int i=0;i<iDimSize;i++)
	{	
		printf("Print aList Value %d\n",*(itrList));
		itrList++;
		if(itrList == aList.end())
		{
			break;
		}
	}
	return 0;
}
