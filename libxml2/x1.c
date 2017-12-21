#include <stdio.h>
#include <libxml/xmlreader.h>

void show(char *message)
{
	printf("%s", message);
}

int main()
{
	show("hello\n");
	char *file="item.txt";

	xmlTextReaderPtr r = xmlNewTextReaderFilename(file);

	if(!r)
	{
		show("RROR\n");
		return -1;
	}
	else
	{
		show("ok.\n");
	}

	return 0;
}

