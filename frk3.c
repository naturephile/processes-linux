#include"header.h"

void main()
{
	printf("Main root P   %d\n",getpid());

	if(fork()==0)
	{
		printf("Child 1.. pid--%d\tppid--%d\n",getpid(),getppid());
	}

	else
	{
		if(fork()==0)
		{
			printf("Child 2.. pid--%d\tppid--%d\n",getpid(),getppid());
		}
		else
		{
			if(fork()==0)
			{
				printf("Child 3.. pid--%d\tppid--%d\n",getpid(),getppid());
			}	
			else
			{
				printf("Parent.. pid--%d\tppid--%d\n",getpid(),getppid());
			}	
		}
	}

	//	sleep(10);
	while(1);
}
/*
   printf("Parent.. pid--%d\n",getpid());


 */
