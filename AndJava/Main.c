#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char filename[100] = "test1.java";
	char command[100] = "javac ";
	
	strcat(command, filename);
	
	int i;
	i = system(command);
	if(i == 0)
	{
		printf("success.\n");
	}
	else	
	{
		printf("failed\n");
	}
}

