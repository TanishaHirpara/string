#include<stdio.h>

main()
{
	char ch;
	printf("Enter character =");
	scanf("%c",&ch);

	if(ch<=97)
	{
		printf("Uppercase character = %c",ch);

	}
	else
	{
		printf("Uppercase character = %c",ch-32);
	}
}
 
