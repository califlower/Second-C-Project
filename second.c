#include "stdio.h"

main (int argc, char** argv)
{
	if (argc!=2)
	{
		printf("error \n");
		return 0;
	}
	int input=atoi(argv[1]);
	
	if (input==2)
	{
		printf("yes \n");
		return 0;
	}
	else if (input<1)
	{
		printf("Has to be greater than or equal to 1");
		return 0;
	}
	else if (input==1)
	{
		printf("no \n");
		return 0;
	}
	
	int i;
	for (i=2;i<input; i++)
	{
		int temp=input%i;
		if (temp==0)
		{
			printf("no \n");
			return 0;
		}
	}
	printf("yes \n");	
	return 0;
}
