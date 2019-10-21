#include"header.h"
#define C1 printf("\e[1;34m\n");
#define C2 printf("\e[1;35m\n");
#define C3 printf("\e[1;36m\n");
#define R printf("\e[m\n");

void main()
{
	if(fork()==0)
	{	C1;
		printf("In c pid=%d\n",getpid());
		sleep(20);
		printf("C after sleep..\n");
		exit(0);
		R;
	}
	else	//parent
	{
	
		int r,s;
		C2;
		printf("In P BEFORE WAIT...\n");	
		r=wait(&s);
		printf("In P After WAIT...\n");
		R;
		C3;
		if(WIFEXITED(s))
		{
			printf("Normal exited.. %d\n",WEXITSTATUS(s));	
		}	
		else if(WIFSIGNALED(s))
		{
			printf("Signaled kill .. signal -%d\n",WTERMSIG(s));
		}
		R;
	}
}
