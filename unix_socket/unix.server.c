/* server.c */
#include <stdio.h>
#include <netinet/in.h>
#include <ctype.h>
#include <unistd.h>
#include "myfunc/wrap.h"

#define MAXLINE 80

int main(void)
{
    char name[] = "unix.socket";
    char buf[MAXLINE];
    int listenfd = serv_listen(&name);
    if (listenfd <= 0)
        perror("listen failed");

    uid_t uidptr;
    int connfd = serv_accept(listenfd, &uidptr);
    int n = read(connfd, buf, MAXLINE);
    for (int i = 0; i < n; i++)
        buf[i] = toupper(buf[i]);
    write(connfd, buf, n);
    close(connfd);

    return 1;
}