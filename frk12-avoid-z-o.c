#include"header.h"

void main()
{
	if(fork()==0)
	{
		printf("In C pid=%d\n",getpid());
		sleep(10);
		printf("In C after sleep\n");
		exit(1);
	}
	else
	{
		int r,s;
		printf("In P before wait\n");
		r=wait(&s);
		printf("In P afteer wait..\n");
		printf("r=%d,s=%d\n",r,s);
		while(1);
	}
}

