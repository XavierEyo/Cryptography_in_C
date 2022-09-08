#include <stdio.h>
#include <string.h>

/**
* program to implement the caesar cipher
*/

main()
{
	
	int i, n, choice;
	char  text[1000], *crp;
	
	printf("press 1 to Encrypt\n");
	printf("press 2 to Decrypt\n");
	printf("press 3 to exit\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
		{
			printf("Enter text to encrypt\n");
			scanf("%[^\n]s", text);
			printf("Enter rotation/key");
			scanf("%d", &n);
	
	
			for(i = 0; text[i] != '\0'; ++i)
			{
				crp = text[i];
				if(crp >= 'a' && crp <= 'z')
				{
					crp += n;
					if (crp > 'z')
					{
						crp = crp - 26;
					}
					text[i]= crp;
				}
				else if(crp >= 'A' && crp <= 'Z')
				{
					crp += n;
					if(crp > 'Z')
					{
						crp = crp - 26;
					}
					text[i] = crp;
				}
			}
			printf("%s", text);
			break;
		}
		case 2:
		{
			printf("Enter text to Decrypt\n");
			scanf("%[^\n]s", text);
			printf("Enter rotation/key");
			scanf("%d", &n);
	
			for(i = 0; text[i] != '\0'; ++i)
			{
				crp = text[i];
				if(crp >= 'a' && crp <= 'z')
				{
					crp -= n;
					if (crp < 'a')
					{
						crp = crp + 26;
					}
					text[i]= crp;
				}
				else if (crp >= 'A' && crp <= 'Z')
				{
					crp -= n;
					if(crp < 'Z')
					{
						crp = crp + 26;
					}
					text[i] = crp;
				}
			}
			printf("%s\n", text);
			break;	
		}
	case 3:
		exit(1);
	default:
		exit(1);
	}
}
			

