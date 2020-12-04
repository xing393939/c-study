#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "myfunc/wrap.h"

#define MAXLINE 80

int main(int argc, char *argv[])
{
    char name[] = "unix.socket";
    char buf[MAXLINE];
    int sockfd = cli_conn(&name);
    if (sockfd <= 0)
        perror("listen failed");

    char str[] = "hello";
    write(sockfd, str, strlen(str));

    int n = read(sockfd, buf, MAXLINE);
    printf("Response from server:\n");
    write(STDOUT_FILENO, buf, n);

    close(sockfd);
    return 0;
}
