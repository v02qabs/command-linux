#include <stdio.h>
#include <string.h>
#include <dirent.h>

int main()
{
	DIR *dir;
	struct dirent *ds;
	char path[100] = "/";
	dir = opendir(path);
	for(ds = readdir(dir); ds != NULL; ds=readdir(dir))
	{
		printf("%s\n", ds -> d_name);
	}
	closedir(dir);

	return 0;
}

