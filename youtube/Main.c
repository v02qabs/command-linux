#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int to_copy()
{
	//copy
	//to copy
	char *p, *top;
	char str[1000] = "I am Hirofumi Takesue.";
	char s0[500];
	top = str;
	p=strrchr(top, 'H');
	int H = p-str+1;
	char sp[2];
	sprintf(sp, "%ld", p-str);
	printf("sp: %s\n", sp);
	H = atoi(sp);
	printf("H=%d\n", H);
	//to copy
	char *p1;
	char to_copy[500];
	p1 =strncpy(to_copy, top, H-1);
	//"I am "
	printf("to_copy=%s\n", to_copy);
	return 0;
}


int main(int argc, char *argv[])
{
	to_copy();
	return 0;
}

