#include"header.h"

void main()
{
	if(fork()==0)
	{
		int r;
		srand(getpid());
		r=rand()%10+1;
		printf("In C1 r=%d\n",r);
		sleep(r);
		printf("C1 is done\n");
	}
	else
	{
		if(fork()==0)
		{
			int r;
			srand(getpid());
			r=rand()%10+1;
			printf("In C2 r=%d\n",r);
			sleep(r);
			printf("C2 is done\n");

		}
		else
		{
			if(fork()==0)
			{
				int r;
				srand(getpid());
				r=rand()%10+1;
				printf("In C3 r=%d\n",r);
				sleep(r);
				printf("C3 is done\n");

			}
			else
			{	
				printf("In parent\n");
				while(wait(0)!=-1);	
				printf("P is done\n");		
			}
		}
	}
}
