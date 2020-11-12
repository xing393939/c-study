#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // environ是全局变量
    extern char **environ;
    for (int i = 0; i < 3; i++)
        printf("%s\n", environ[i]);

    putchar(10);
    printf("SSH_CONNECTION=%s\n", getenv("SSH_CONNECTION"));
    printf("LANG=%s\n", getenv("LANG"));
    printf("OLDPWD=%s\n", getenv("OLDPWD"));

    putchar(10);
    pid_t pid;
    int fd[2];
    if (pipe(fd) < 0 || (pid = fork()) < 0) {
        perror("fork failed or pipe failed");
        exit(1);
    }
    if (pid == 0) {
        close(fd[1]);
        char line[12];
        read(fd[0], line, 12);
        printf("%s\n", line);
    } else {
        printf("This is the parent\n");
        close(fd[0]);
        write(fd[1], "hello world\n", 12);
        wait(NULL);
    }

    return 0;
}