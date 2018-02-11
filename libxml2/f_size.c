#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fs.h"

void show(char *str)
{
	printf("%s\n", str);
}

long f_size()
{
	char *filename = "item.txt";
	printf("filename = %s ",  filename);
	FILE *fp;
	fp = fopen(filename, "r");
	if(fp == NULL)
		exit(0);

	fseek(fp,0, SEEK_END);
	long sz;
	sz = ftell(fp);

	printf("%s, %dBite...\n", filename, sz);

	fclose(fp);

	return sz;
}
/*
int main()
{
	printf("Hello.\n");
	f_size();
	return 0;
}

*/
