#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    struct addrinfo hints, *res;
    int sockfd;

    char buf[2056];
    int byte_count;

    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    getaddrinfo("api.icndb.com", "80", &hints, &res);
    sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    printf("Connecting...\n");

    connect(sockfd, res->ai_addr, res->ai_addrlen);
    printf("Connected!\n");

    char *header = "GET /jokes/random?limitTo=[nerdy] HTTP/1.1\r\nHost: api.icndb.com\r\n\r\n";
    send(sockfd, header, strlen(header), 0);
    printf("GET Sent...\n");

    byte_count = recv(sockfd, buf, sizeof(buf) - 1, 0);
    buf[byte_count] = 0;
    printf("recv()'d %d bytes of data in buf\n", byte_count);
    printf("%s", buf);

    return 0;
}