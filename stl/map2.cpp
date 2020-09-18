#include <stdio.h>
#include <map>
#include <string>
using namespace std;
int main(int argc,char** argv)
{
	map<string,int> aMap;
	aMap.insert(make_pair("a",1));
	aMap.insert(make_pair("b",2));
	aMap.insert(make_pair("c",3));
	aMap.insert(make_pair("d",4));
	printf("Print Map a = %d\n",aMap.find("a")->second);
	printf("Print Map b = %d\n",aMap.find("b")->second);
	printf("Print Map c = %d\n",aMap.find("c")->second);
	printf("Print Map d = %d\n",aMap.find("d")->second);
	return 0;
}
