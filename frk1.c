#include"header.h"

void main()
{
	printf("Abc   %d\n",getpid());
	fork();
	fork();
	fork();
	printf("DEF  %d\n",getpid());
	while(1);
}
