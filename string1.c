#include<stdio.h>

main()

{

	char ch;
	printf("Enter character =");
	scanf("%c",&ch);

	if(ch>=97)
	{
		printf("lowercase character = %c",ch);

	}
	else
	{
		printf("lowercase character = %c",ch+32);
	}


}