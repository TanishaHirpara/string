#include<stdio.h>

main()
{
	int i;
	char name[] = "World";
	printf("string of lowercase =");

	for(i=0;i<=5;i++)
	{
		if(name[i]>=97 && i<=122)
		{
			printf("%c",name[i]);
		}
		else
		{
			printf("%c",name[i]+32);
		}
	}

}

