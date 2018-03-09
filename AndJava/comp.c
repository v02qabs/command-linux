#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *filename = argv[1];
	char str3[100];
	char *command = "javac ";
	sprintf(str3, "%s %s", command , filename);
	
	int i;
	i = system(str3);
	if(i == 0)
	{
		printf("success.\n");
	}
	else	
	{
		printf("failed\n");
	}
}

