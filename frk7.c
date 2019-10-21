#include"header.h"

void main()
{
	int i;
	
	printf("Hi --- I'm %d\n",getpid());
	for(i=0;i<3;i++)
	{
		if(fork()==0)
		{
		printf("Hello ... I'm %d, ppid=%d\n",getpid(),getppid());
	//	break;					
		}	
		else
		break;					
	}
	while(1);
}

/*
void main()
{
	int i;
	
	printf("Hi --- I'm %d\n",getpid());
	for(i=0;i<3;i++)
	{
		if(fork()==0)
		{
		printf("Hello ... I'm %d, ppid=%d\n",getpid(),getppid());
					
		}	
		else
		;
	}
	while(1);
}*/
