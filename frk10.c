#include"header.h"

void main()
{
	
	if(fork())
	{
		printf("Parent.. pid--%d , ppid=%d\n",getpid(),getppid());
		system("ls");
	sleep(5);
	}
	else
	{
		printf("Child.. pid--%d , ppid=%d\n",getpid(),getppid());
		system("pwd");
	sleep(15);
	}
//	while(1);
}
