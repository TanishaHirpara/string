#include<stdio.h>

main()
{
	int i;
	char name[]="world";
	printf("string of uppercase =  ");

	for(i=0;i<=5;i++)
	{
		if(name[i]>=65 && i<=90)
		{
			printf("%c",name[i]);
		}
		else
		{
				printf("%c",name[i]-32);
		}
	}
}
