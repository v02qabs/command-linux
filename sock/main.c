#include <sys/socket.h>
#include <stdio.h>

void NewSock()
{
	int sock;
	sock = socket(PF_LOCAL, SOCK_STREAM, 0);

	printf("socket number is : ");
	printf("%d\n", sock);

}

int main()
{
	NewSock();
	return 0;
}

