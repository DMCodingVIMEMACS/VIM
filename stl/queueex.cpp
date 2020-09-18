#include <stdio.h>
#include <queue>
using namespace std;
int main(int argc,char** argv)
{
	queue<int> aQueue;
	aQueue.push(5);
	aQueue.push(6);
	aQueue.push(7);
	aQueue.push(8);
	aQueue.push(9);
	aQueue.push(4);
	aQueue.push(3);
	aQueue.push(2);
	aQueue.push(1);
	aQueue.push(0);
	int iSize = aQueue.size();
	while(iSize>0)
	{	
	
		int iValue = aQueue.back();
		printf("Print Queue = %d\n",iValue);
		aQueue.pop_back();
		iSize = aQueue.size();
	}
	return 0;
}
