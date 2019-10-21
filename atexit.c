#include"header.h"

void end(void)
{
	printf("Closing things.. .\n");
}


void main()
{
	printf("init\n");	
	atexit(end);

	printf("Hello\n");
	sleep(10);
	printf("last\n");

///	fork();
//	printf("Hello.. pid--%d , ppid=%d\n",getpid(),getppid());
//	while(1);
}
