#include"header.h"

void main()
{
	if(fork()==0)
	{
		printf("I'm C ... pid=%d,ppid=%d\n",getpid(),getppid());
		sleep(5);
		printf("I'm C ... pid=%d,ppid=%d\n",getpid(),getppid());
	}
	else
	{
		printf("I'm P ... pid=%d,ppid=%d\n",getpid(),getppid());
		sleep(10);
		printf("I'm P ... pid=%d,ppid=%d\n",getpid(),getppid());
	}
}
