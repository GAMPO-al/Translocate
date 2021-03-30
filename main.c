#include <stdio.h>
 
 
int main(void)
{
	char msg[100];
	char letters[27] = {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	printf("type the stirng :");
	scanf("%s",msg);

	short lenght = 0;
	while (msg[lenght]!='\0')
	{
		lenght+=1;
	}
	int result[lenght];
	for(int i=0;i<lenght;i++)
	{
		for(int j = 0;j<27;j++)
		{
			if(msg[i]==letters[j])
			{
				result[i] = j; 
			}
		}
	}
	for(int i = 0;i<lenght;i++)
	{
		printf("%d-",result[i]);
	}
	//retur new line
	printf("\n");
	return 0;
}