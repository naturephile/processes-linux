#include"header.h"
//woking on..
void main()
{
	int a=3;
	if(fork()==0)
	{
		if(a==3)
		{
		printf("child .. pid=%d,ppid=%d\n",getpid(),getppid());
		exit(0);
		}
		else
		exit(1);
	}
	else
	{
		printf("parent .. pid=%d,ppid=%d\n",getpid(),getppid());
	}
}
