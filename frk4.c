#include"header.h"

void main()
{
	printf("Main root P   %d\n",getpid());

	if(fork())
	{
		if(fork())
		{

			if(fork())
			{
				printf("Parent... pid--%d\tppid--%d\n",getpid(),getppid());	
			}
			else
			{
				printf("Child3 ... pid--%d\tppid--%d\n",getpid(),getppid());	
			}
		}
		else
		{
			printf("Child2 ... pid--%d\tppid--%d\n",getpid(),getppid());	
		}
	}
	else
	{
		printf("Child1 ... pid--%d\tppid--%d\n",getpid(),getppid());	
	}

	//	sleep(10);
	while(1);
}
/*
   printf("Parent.. pid--%d\n",getpid());


 */
