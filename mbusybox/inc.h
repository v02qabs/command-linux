#include <stdio.h>

void show(char *message)
{
	printf("%s\n", message);
}

void ok()
{
	show("ok.\n");
}


void ng()
{
	show("ng");
}

