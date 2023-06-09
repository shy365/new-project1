
#include <stdio.h>
#include <stdlib.h>
/*
* @brrief   这是一个测试程序
* @prame    参数个数、参数指针
* @return   成功返回0,失败返回-1
*/

int main(int argc,char* argv[])
{
	int* p;
	if((p = (malloc(sizeof(int)))) == NULL)
	{
		printf("mallocn failed\n");
		return -1;
	}
	else
		printf("malloc success\n");

	free(p);
	p = NULL;
	return 0;
    int number_of_book = 100;   
}
