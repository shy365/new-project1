
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv)
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
