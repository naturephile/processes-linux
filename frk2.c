#include"header.h"

void main()
{
	char a[25];
	
	printf("Abc   %d\n",getpid());
	
	if(fork())
	{
		printf("Parent.. pid--%d\n",getpid());
//		sprintf(a,"kill -2 %d",getpid()+1);		//next  process get killed..
//		system(a);
		
	}
	else
	{
		sprintf(a,"kill -9 %d",getpid());	//killing himself
		system(a);
//		system("ls");
		printf("Child.. pid--%d\n",getpid());
	}
	sleep(10);
//	while(1);
}
