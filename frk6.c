// working on..	.

#include"header.h"

void main()
{
	printf("Main root P  %d\n",getpid());

	if(fork())
	{
		printf("Parent... pid--%d\tppid--%d\n",getpid(),getppid());	
	}
	else
	{
		if(fork()==0)
		{
			if(fork()==0)
			{
				if(fork()==0)
				{
					printf("Child1 ... pid--%d\tppid--%d\n",getpid(),getppid());	
				}
				else
				{
					printf("Child2 ... pid--%d\tppid--%d\n",getpid(),getppid());	
				}
			}
			else
			{
				printf("Child3 ... pid--%d\tppid--%d\n",getpid(),getppid());	
			}
		}
	}

	//	sleep(10);
	while(1);
}
/*
   printf("Parent... pid--%d\tppid--%d\n",getpid(),getppid());	
   printf("Child1 ... pid--%d\tppid--%d\n",getpid(),getppid());	


 */
