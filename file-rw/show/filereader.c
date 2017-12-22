#include "inc.h"


void OpenFile(char *filename)
{
	char str[2048];
	FILE *f;
	if((f=fopen(filename, "r")) == NULL)
	{
		show("error");
	}

	while(fscanf(f, "%s", str)!= EOF)
	{
		show(str);
	}

	fclose(f);
}

