#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fs.h"

/*
void show(char *name)
{
	printf("%s\n", name);

*/
void l_files()
{
	char *filename = "item.txt";
	FILE *fp;
	fp = fopen(filename, "r");
	if(fp == NULL)
		exit(0);

	int size = f_size();
	printf("%d\n", size);
	char buf[size];
	fread(buf, 1, sizeof(buf), fp);

	printf("%s\n", buf);

	fclose(fp);

}

int main()
{
	l_files();
	return 0;
}

