#include <netinet/in.h>

#ifndef POWER_H
#define POWER_H

int cli_conn(const char *name);
int serv_accept(int listenfd, uid_t *uidptr);
int serv_listen(const char *name);

#endif
