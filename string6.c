#include<stdio.h>

main()
{
	char name[]="worLd";	
	int i;

	printf("string of togglecase =");
	for(i=0;name[i]!=NULL;i++)
	{
		if(name[i]>=65 && name[i]<=90)

			{
				printf("%c",name[i]+32);
			}
			else
			{
				printf("%c",name[i]-32);
			}
	}
}

