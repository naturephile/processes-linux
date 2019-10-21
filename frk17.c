#include"header.h"

void main()
{
	int a[3];
	
	if( (a[0]=fork())==0 )
	{
		int r;
		srand(getpid());
		r=rand()%10+1;
		printf("In C1 r=%d\n",r);
		sleep(r);
	}
	else
	{
	wait(0);
		if( (a[1]=fork())==0 )
		{
			int r;
			srand(getpid());
			r=rand()%10+1;
			printf("In C2 r=%d\n",r);
			sleep(r);

		}
		else
		{
		wait(0);
			if( (a[2]=fork())==0 )
			{
				int r;
				srand(getpid());
				r=rand()%10+1;
				printf("In C3 r=%d\n",r);
				sleep(r);

			}
			else
			{	
			wait(0);
				int r;
				printf("In parent\n");
				while( (r=wait(0))!=-1 )
				{
					if(r==a[0])
					printf("C1 is done\n");
					if(r==a[1])
					printf("C2 is done\n");
					if(r==a[2])
					printf("C3 is done\n");
				}	
				printf("P is done\n");		
			}
		}
	}
}
