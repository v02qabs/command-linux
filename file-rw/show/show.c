#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show(char *message)
{
	printf("%s\n", message);
}

void ok()
{
	show("Ok.\n");
}

void error()
{
	show("ng.\n");
}
