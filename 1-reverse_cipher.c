#include <stdlib.h>
#include <stdio.h>
#include <string.h>
main()
{
	char str[20];
	int len;
	
	printf("Enter any string : ");
	scanf("%[^\n]s", str);
	
	len = strlen(str) - 1;
	while(len >= 0)
	{
		printf("%c", str[len]);
		len--;
	}
	printf("\n");
}

