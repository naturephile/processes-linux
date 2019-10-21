#include"header.h"

void main()
{
	printf("Hi.. pid--%d , ppid=%d\n",getpid(),getppid());	//use '\n' while using sys calls to avoid buffer issues
	fork();
	printf("Hello.. pid--%d , ppid=%d\n",getpid(),getppid());
	while(1);
}
