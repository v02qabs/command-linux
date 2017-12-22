#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>

void NewSock()
{
	int sock;
	sock = socket(PF_LOCAL, SOCK_STREAM, 0);

	printf("socket number is : ");
	printf("%d\n", sock);

	struct hostent *host;
	host = gethostbyname("localhost");

	struct sockaddr_in serverAddr;
	memset(&serverAddr, 0, sizeof(serverAddr));
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_addr = *(struct in_addr*)(host->h_addr_list[0]);
	serverAddr.sin_port = htons(8080);

	int ret = bind(sock, (struct sockaddr *)&serverAddr, sizeof(serverAddr));
	printf("%d\n", ret);

}

int main()
{
	NewSock();
	return 0;
}

